#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class HospitalStaff
{
protected:
    string staffName;

public:
    // Constructor
    HospitalStaff(string name)
    {
        staffName = name;
    }

    // Pure Virtual Function
    virtual void performDuty() = 0;
};

// Derived Class: Doctor
class Doctor : public HospitalStaff
{
public:
    Doctor(string name) : HospitalStaff(name)
    {
    }

    void performDuty() override
    {
        cout << "Doctor " << staffName
             << " is diagnosing patients." << endl;
    }
};

// Derived Class: Nurse
class Nurse : public HospitalStaff
{
public:
    Nurse(string name) : HospitalStaff(name)
    {
    }

    void performDuty() override
    {
        cout << "Nurse " << staffName
             << " is assisting patients." << endl;
    }
};

// Derived Class: Receptionist
class Receptionist : public HospitalStaff
{
public:
    Receptionist(string name) : HospitalStaff(name)
    {
    }

    void performDuty() override
    {
        cout << "Receptionist " << staffName
             << " is managing appointments." << endl;
    }
};

int main()
{
    // Create objects
    Doctor doctor("Ali");
    Nurse nurse("Sara");
    Receptionist receptionist("Ahmed");

    // Perform duties
    doctor.performDuty();
    nurse.performDuty();
    receptionist.performDuty();

    return 0;
}
