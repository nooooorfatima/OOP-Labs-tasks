#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual double area()
    {
        return 0;
    }
};

// Rectangle derived class
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double area() override
    {
        return length * width;
    }
};

// Circle derived class
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    // Create objects
    Rectangle rectangle(10, 5);
    Circle circle(7);

    // Shape pointer
    Shape* shape;

    // Access Rectangle using Shape pointer
    shape = &rectangle;
    cout << "Area of Rectangle = " << shape->area() << endl;

    // Access Circle using Shape pointer
    shape = &circle;
    cout << "Area of Circle = " << shape->area() << endl;

    return 0;
}
