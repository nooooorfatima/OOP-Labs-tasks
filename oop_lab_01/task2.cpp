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
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    int n;

    // Ask user for number of students
    cout << "Enter number of students: ";
    cin >> n;

    // Array of structures
    Student students[100];

    // Input details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":" << endl;

        cout << "First Name: ";
        cin >> students[i].firstName;

        cout << "Last Name: ";
        cin >> students[i].lastName;

        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Display student information
    cout << "\n--- Student Information ---" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].displayStudentInfo();
    }

    return 0;
}
