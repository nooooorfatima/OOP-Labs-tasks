#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;

    // Static variable for company name
    static string companyName;

public:
    // Constructor
    Employee(int id, string name)
    {
        employeeID = id;
        employeeName = name;
    }

    // Display employee details
    void displayEmployee()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "------------------------" << endl;
    }

    // Static member function
    static void displayCompanyInfo()
    {
        cout << "Company Name: " << companyName << endl;
    }
};

// Initialize static variable
string Employee::companyName = "ABC Company";

int main()
{
    // Create multiple employee objects
    Employee employee1(101, "Ali");
    Employee employee2(102, "Ahmed");
    Employee employee3(103, "Sara");

    // Display employee details
    employee1.displayEmployee();
    employee2.displayEmployee();
    employee3.displayEmployee();

    // Access static function using class name
    cout << "Company Information:" << endl;
    Employee::displayCompanyInfo();

    return 0;
}
