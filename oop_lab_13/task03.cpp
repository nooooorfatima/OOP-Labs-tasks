#include <iostream>
#include <string>
using namespace std;

// Class Template
template <typename T>
class Pair
{
private:
    T first;
    T second;

public:
    // Constructor
    Pair(T f, T s)
    {
        first = f;
        second = s;
    }

    // Get first value
    T getFirst()
    {
        return first;
    }

    // Get second value
    T getSecond()
    {
        return second;
    }

    // Display values
    void display()
    {
        cout << "First: " << first << " Second: " << second << endl;
    }
};

int main()
{
    // Pair of integers
    Pair<int> intPair(10, 20);

    // Pair of doubles
    Pair<double> doublePair(5.5, 8.8);

    // Pair of strings
    Pair<string> stringPair("Hello", "World");

    // Display each pair
    cout << "Integer Pair:" << endl;
    intPair.display();

    cout << "Double Pair:" << endl;
    doublePair.display();

    cout << "String Pair:" << endl;
    stringPair.display();

    return 0;
}
