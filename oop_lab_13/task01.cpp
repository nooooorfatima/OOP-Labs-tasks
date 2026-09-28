#include <iostream>
#include <string>
using namespace std;

// Function Template
template <typename T>
void printTwice(T val)
{
    cout << val << endl;
    cout << val << endl;
}

int main()
{
    // Call with int
    printTwice(10);

    cout << "----------------" << endl;

    // Call with double
    printTwice(5.5);

    cout << "----------------" << endl;

    // Call with string
    printTwice(string("Hello"));

    return 0;
}
