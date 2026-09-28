#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member function
    void displayStudentInfo()
    {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Structure variable
    Student student;

    // Assign values to data members
    student.firstName = "Ali";
    student.lastName = "Khan";
    student.rollNumber = 101;
    student.marks = 85.5;

    // Call member function
    student.displayStudentInfo();

    return 0;
}
