#include <iostream>
#include "calculator.h"  

using namespace std;

int main() {
    Calculator c1;
    int choice;

    cout << "Enter first number: ";
    cin >> c1.num1;

    cout << "Enter second number: ";
    cin >> c1.num2;

    cout << "\nChoose operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
        cout << "Result = " << c1.add();
    else if(choice == 2)
        cout << "Result = " << c1.subtract();
    else if(choice == 3)
        cout << "Result = " << c1.multiply();
    else if(choice == 4)
        cout << "Result = " << c1.divide();
    else
        cout << "Invalid choice";

    return 0;
}
