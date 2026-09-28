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

    // Friend function declaration
    friend void addDistance(Distance d1, Distance d2);
};

// Friend function definition
void addDistance(Distance d1, Distance d2)
{
    int totalFeet = d1.feet + d2.feet;
    int totalInches = d1.inches + d2.inches;

    // Convert 12 inches into 1 foot
    if (totalInches >= 12)
    {
        totalFeet = totalFeet + (totalInches / 12);
        totalInches = totalInches % 12;
    }

    cout << "First Distance: "
         << d1.feet << " feet "
         << d1.inches << " inches" << endl;

    cout << "Second Distance: "
         << d2.feet << " feet "
         << d2.inches << " inches" << endl;

    cout << "Total Distance: "
         << totalFeet << " feet "
         << totalInches << " inches" << endl;
}

int main()
{
    // Create two Distance objects
    Distance d1(5, 8);
    Distance d2(3, 7);

    // Call friend function
    addDistance(d1, d2);

    return 0;
}
