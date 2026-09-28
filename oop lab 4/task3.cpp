#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    Rectangle(float value) {
        length = value;
        width = value;
    }

    float area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5.0, 3.0);
    Rectangle r3(4.0);

    cout << "r1 " << endl;
    r1.display();

    cout << "r2 " << endl;
    r2.display();

    cout << "r3 " << endl;
    r3.display();

    return 0;
}
