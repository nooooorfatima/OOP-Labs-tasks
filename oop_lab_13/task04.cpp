#include <iostream>
using namespace std;

// Class Template
template <typename T>
class Calculator
{
private:
    T a;
    T b;

public:
    // Constructor
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    // Addition
    T add()
    {
        return a + b;
    }

    // Subtraction
    T subtract()
    {
        return a - b;
    }

    // Multiplication
    T multiply()
    {
        return a * b;
    }
};

int main()
{
    // Calculator with int values
    Calculator<int> intCalc(10, 5);

    cout << "Integer Calculator:" << endl;
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;

    cout << endl;

    // Calculator with double values
    Calculator<double> doubleCalc(10.5, 2.5);

    cout << "Double Calculator:" << endl;
    cout << "Addition: " << doubleCalc.add() << endl;
    cout << "Subtraction: " << doubleCalc.subtract() << endl;
    cout << "Multiplication: " << doubleCalc.multiply() << endl;

    return 0;
}
