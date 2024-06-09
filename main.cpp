#include <iostream>
#include "Multiply.h"
#include "Add.h"

int main() {
    Multiply multiplier;
    Add adder;

    int a = 5, b = 3;

    std::cout << "Multiplication of " << a << " and " << b << " is: " << multiplier.multiply(a, b) << std::endl;
    std::cout << "Addition of " << a << " and " << b << " is: " << adder.add(a, b) << std::endl;

    return 0;
}
