#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create students.txt and write student details
    ofstream file("students.txt");

    file << "Name: Ali, Roll Number: 101" << endl;
    file << "Name: Ahmed, Roll Number: 102" << endl;
    file << "Name: Sara, Roll Number: 103" << endl;

    file.close();

    // Open students.txt in read mode
    ifstream readFile("students.txt");

    if (!readFile)
    {
        cout << "Error: File could not be opened." << endl;
        return 1;
    }

    // Display student details
    string line;

    cout << "Student Details:" << endl;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}
