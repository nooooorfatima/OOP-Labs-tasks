#include <iostream>
using namespace std;

// Calculator class
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }
};

// Student class
class Student
{
private:
    string name;
    Calculator* calculator;   // Aggregation: Student refers to Calculator

public:
    Student(string n, Calculator* c)
    {
        name = n;
        calculator = c;
    }

    void addition(int a, int b)
    {
        int result = calculator->add(a, b);

        cout << name << " performed addition: "
             << a << " + " << b
             << " = " << result << endl;
    }

    void multiplication(int a, int b)
    {
        int result = calculator->multiply(a, b);

        cout << name << " performed multiplication: "
             << a << " * " << b
             << " = " << result << endl;
    }
};

int main()
{
    // Calculator is created externally by the teacher/system
    Calculator sharedCalculator;

    // Students use the same shared calculator
    Student student1("Ali", &sharedCalculator);
    Student student2("Ahmed", &sharedCalculator);
    Student student3("Sara", &sharedCalculator);

    student1.addition(10, 5);
    student2.multiplication(4, 6);
    student3.addition(20, 8);

    return 0;
}
