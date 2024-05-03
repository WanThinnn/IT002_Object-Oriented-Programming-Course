class INTEGER
{
    private:
        int value; // Giá trị của INTEGER

    public:
        // Constructor
        INTEGER(int val = 0) : value(val) {}

        // Phương thức getter và setter
        int getValue() const {return value;}
        void setValue(int val) {value = val;}

        // Toán tử gán
        INTEGER& operator=(const INTEGER& other)
        {
            value = other.value;
            return *this;
        }

        // Toán tử chuyển đổi sang int
        operator int() const {return value;}

        // Các toán tử số học
        friend INTEGER operator + (const INTEGER A, const INTEGER B)
        {
            return INTEGER(A.value + B.value);
        }
        friend INTEGER operator - (const INTEGER A, const INTEGER B)
        {
            return INTEGER(A.value - B.value);
        }

        friend INTEGER operator * (const INTEGER A, const INTEGER B)
        {
            return INTEGER(A.value * B.value);
        }

        friend INTEGER operator / (const INTEGER A, const INTEGER B)
        {
            return INTEGER(A.value / B.value);
        }

        // Các toán tử so sánh
        bool operator == (const INTEGER &other) const {
            return value == other.value;
        }

        bool operator != (const INTEGER &B) const
        {
            return value != B.value;
        }

        bool operator < (const INTEGER &B) const
        {
            return value < B.value;
        }

        bool operator <= (const INTEGER &B) const
        {
            return value <= B.value;
        }

        bool operator > (const INTEGER &B) const
        {
            return value > B.value;
        }

        bool operator >= (const INTEGER &B) const
        {
            return value >= B.value;
        }
};

