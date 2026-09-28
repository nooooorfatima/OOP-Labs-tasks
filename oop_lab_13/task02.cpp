#include <iostream>
using namespace std;

// Function Template
template <typename T>
T findMin(T a, T b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    // Test with integers
    cout << "Minimum Integer: " << findMin(10, 5) << endl;

    // Test with doubles
    cout << "Minimum Double: " << findMin(4.5, 7.2) << endl;

    // Test with characters
    cout << "Minimum Character: " << findMin('z', 'a') << endl;

    return 0;
}
