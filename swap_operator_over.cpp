#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Overloading the + operator for number swapping
    Number operator+(const Number &other) {
        Number temp = *this;
        value = other.value;
        value = temp.value;
        return *this;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Number a(5);
    Number b(10);

    std::cout << "Before swapping: a = " << a.getValue() << ", b = " << b.getValue() << std::endl;

    // Swapping using operator overloading
    a = a + b;

    std::cout << "After swapping: a = " << a.getValue() << ", b = " << b.getValue() << std::endl;

    return 0;
}
