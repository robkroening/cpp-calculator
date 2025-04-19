#include <iostream>
#include "Calculator.h"

// class constructor
Calculator::Calculator(double x, double y) {
    this->num1 = x;
    this->num2 = y;
}

// add
double Calculator::add() {
    result = num1 + num2;
    return result;
}

// subtract
double Calculator::subtract() {
    result = num1 - num2;
    return result;
}

// multiply
double Calculator::multiply() {
    result = num1 * num2;
    return result;
}

// divide
double Calculator::divide() {
    // if num2 = 0, exit method and throw an error
    if (num2 == 0) {
        std::cout << "Cannot divide by 0! Oops.";
        return 0;
    // if num2 != 0, proceed with division
    } else {
        result = num1 / num2;
        return result;
    }
}

// print result
int Calculator::printResult() {
    std::cout << "The result of the calculation is: " << result;
    return 0;
}