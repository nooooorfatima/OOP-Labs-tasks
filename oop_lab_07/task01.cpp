#include <iostream>
using namespace std;

class Display
{
private:
    int lastResult;

public:
    Display()
    {
        lastResult = 0;
    }

    void showResult(int result)
    {
        lastResult = result;
        cout << "Result: " << result << endl;
    }

    int getLastResult()
    {
        return lastResult;
    }
};

class Calculator
{
private:
    // Composition
    Display display;

public:
    void add(int a, int b)
    {
        int result = a + b;
        display.showResult(result);
    }

    void multiply(int a, int b)
    {
        int result = a * b;
        display.showResult(result);
    }

    int getLastResult()
    {
        return display.getLastResult();
    }
};

int main()
{
    Calculator calculator;

    cout << "Addition:" << endl;
    calculator.add(10, 5);

    cout << "Multiplication:" << endl;
    calculator.multiply(4, 6);

    cout << "Last Result: "
         << calculator.getLastResult() << endl;

    return 0;
}
