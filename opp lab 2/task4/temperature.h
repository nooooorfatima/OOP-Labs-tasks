#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
using namespace std;

class Temperature {
    float fahrenheit;

public:
    float celsiusTemp;

    void convertTemp(){
        fahrenheit = (celsiusTemp * 9 / 5) + 32;
    }

    void display(){
        cout << "The temperature in Fahrenheit is " << fahrenheit << endl;
    }
};

#endif
