#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<iostream>

class Calculator {
public:
    float num1;
    float num2;

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        return num1 / num2;
    }
};

#endif
