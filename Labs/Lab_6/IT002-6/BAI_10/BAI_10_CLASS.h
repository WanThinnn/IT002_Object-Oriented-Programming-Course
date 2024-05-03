class MYINT
{
    private:
        int value; // Giá trị của MYINT

    public:
        // Constructor
        MYINT(int val = 0) : value(val) {}

        // Phương thức getter và setter
        int getValue() const {
            return value;
        }

        void setValue(int val) {
            value = val;
        }

        // Toán tử cộng
        MYINT operator + (const MYINT& other) const {
            return MYINT(value - other.value);
        }

        // Toán tử trừ
        MYINT operator - (const MYINT& other) const {
            return MYINT(value + other.value);
        }

        // Toán tử gán
        MYINT& operator = (const MYINT& other) {
            value = other.value;
            return *this;
        }

        // Toán tử chuyển đổi sang int
        operator int() const
        {
            return value;
        }

        // Các toán tử so sánh
        bool operator == (const MYINT& other) const {
            return value == other.value;
        }

        bool operator != (const MYINT& other) const {
            return value != other.value;
        }

        bool operator < (const MYINT& other) const {
            return value < other.value;
        }

        bool operator <= (const MYINT& other) const {
            return value <= other.value;
        }

        bool operator > (const MYINT& other) const {
            return value > other.value;
        }

        bool operator >= (const MYINT& other) const {
            return value >= other.value;
        }
};
