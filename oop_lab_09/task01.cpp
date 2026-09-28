#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    // Overload == operator using member function
    bool operator==(Distance d)
    {
        return (feet == d.feet && inches == d.inches);
    }
};

int main()
{
    // Create two Distance objects
    Distance d1(5, 6);
    Distance d2(5, 6);

    // Compare distances
    if (d1 == d2)
    {
        cout << "Both distances are equal." << endl;
    }
    else
    {
        cout << "Both distances are not equal." << endl;
    }

    return 0;
}
