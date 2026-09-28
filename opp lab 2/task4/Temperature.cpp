#include<iostream>
#include "Temperature.h"
using namespace std;

int main(){
    Temperature t1;

    t1.celsiusTemp = 2;
    t1.convertTemp();
    t1.display();

    return 0;
}
