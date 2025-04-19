#pragma once

class Calculator {
private:
    double num1;
    double num2;
    double result;

public:
    Calculator(double x, double y);
    double add();
    double subtract();
    double multiply();
    double divide();
    int printResult();
};