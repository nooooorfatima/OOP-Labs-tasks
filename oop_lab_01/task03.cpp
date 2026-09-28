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
        cout << "\n--- Student Information ---" << endl;
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Dynamically create a Student structure
    Student* student = new Student;

    // Assign values using structure pointer
    cout << "Enter First Name: ";
    cin >> student->firstName;

    cout << "Enter Last Name: ";
    cin >> student->lastName;

    cout << "Enter Roll Number: ";
    cin >> student->rollNumber;

    cout << "Enter Marks: ";
    cin >> student->marks;

    // Call member function using pointer
    student->displayStudentInfo();

    // Free dynamically allocated memory
    delete student;

    return 0;
}
