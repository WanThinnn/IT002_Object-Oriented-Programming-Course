#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


// Lớp cơ sở Tài khoản (Account)
class Account
{
protected:
    string username;
    string passwordHashed;
    string permission;

public:
    Account(const string& username, const string& passwordHashed, const string& permission)
        : username(username), passwordHashed(passwordHashed), permission(permission) {}

    virtual ~Account() {}
    void setPasswordHashed(const string& newPassword)
        {
           passwordHashed = newPassword;
        }
    virtual void displayInfo() const
    {
        cout << "Username: " << username << "\nPermission: " << permission << endl;
    }
    string getUserName();
};

// Lớp tài khoản thường (RegularAccount) kế thừa từ lớp Account
class RegularAccount : public Account
{
public:
    RegularAccount(const string& username, const string& passwordHashed)
        : Account(username, passwordHashed, "user") {}
};



// Lớp tài khoản quản trị viên (AdminAccount) kế thừa từ lớp Account
class AdminAccount : public Account
{
public:
    AdminAccount(const string& username, const string& passwordHashed)
        : Account(username, passwordHashed, "admin") {}

    void resetPassword(Account& account, const string& newPassword)
    {
        // Thực hiện đặt lại mật khẩu cho tài khoản khác
        account.setPasswordHashed(newPassword);
        cout << "Password reset successful for account: " << account.getUserName() << endl;
    }
};

// Lớp quản lý danh sách tài khoản (AccountManager)
class AccountManager
{
private:
    unordered_map <string, Account*> accounts;

public:
    ~AccountManager()
    {
        // Giải phóng tài nguyên
        for (auto& pair : accounts)
        {
            delete pair.second;
        }
    }

    void addAccount(Account* account)
    {
        // Thêm tài khoản vào danh sách
        accounts[account->getUserName()] = account;
    }

    Account* findAccount(const string& username) const
    {
        // Tìm kiếm tài khoản theo tên người dùng
        auto it = accounts.find(username);
        return (it != accounts.end()) ? it->second : nullptr;
    }

    void displayAllAccounts() const
    {
        // Hiển thị thông tin của tất cả các tài khoản
        for (const auto& pair : accounts)
        {
            pair.second->displayInfo();
            cout << endl;
        }
    }
};

int main() {
    AccountManager accountManager;

    // Tạo và thêm các tài khoản vào AccountManager
    RegularAccount regularAccount1("user1", "hashed_password1");
    RegularAccount regularAccount2("user2", "hashed_password2");
    AdminAccount adminAccount("admin", "hashed_password_admin");
    accountManager.addAccount(&regularAccount1);
    accountManager.addAccount(&regularAccount2);
    accountManager.addAccount(&adminAccount);

    // Hiển thị thông tin của tất cả các tài khoản
    accountManager.displayAllAccounts();

    // Thiết lập lại mật khẩu cho một tài khoản bằng tài khoản quản trị viên
    Account* accountToResetPassword = accountManager.findAccount("user1");
    if (accountToResetPassword)
    {
        AdminAccount* admin = dynamic_cast<AdminAccount*>(accountManager.findAccount("admin"));
        if (admin)
        {
            admin->resetPassword(*accountToResetPassword, "new_password");
        }
    }

    return 0;
}
