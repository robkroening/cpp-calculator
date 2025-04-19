#include <iostream>
#include "Calculator.h"

int main() {
    // instantiate needed variables for the calculator: a, b, operator
    // get user input for the calculator: num1, operator, num2
    // create new calculator object from class
    // perform logic based on what a calculator does and show the result

    double a, b;
    char sign;

    // get num1
    std::cout << "Please enter the first number: ";
    std::cin >> a;
    // get operator
    std::cout << "Please enter the operator (+, -, *, /): ";
    std::cin >> sign;
    // get num2
    std::cout << "Please enter the second number: ";
    std::cin >> b;

    // create new calculator object
    Calculator calculator(a, b);

    // perform logic
    if (sign == '+') {
        calculator.add();
    } else if (sign == '-')
    {
        calculator.subtract();
    } else if (sign == '*')
    {
        calculator.multiply();
    } else if (sign == '/')
    {
        calculator.divide();
    } else {
        std::cout << "Error. Invalid Operator.";
        return 0;
    }
    
    // print the result
    calculator.printResult();
}