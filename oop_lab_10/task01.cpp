#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Step 1: Create and write to the file
    ofstream file("notes.txt");

    file << "This is my first line." << endl;
    file << "This is my second line." << endl;
    file << "This is my third line." << endl;

    file.close();

    // Step 2: Read the file
    ifstream readFile("notes.txt");

    string line;

    cout << "File Contents:" << endl;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();

    // Step 3: Append name and roll number
    ofstream appendFile("notes.txt", ios::app);

    appendFile << "Name: Noor" << endl;
    appendFile << "Roll Number: 12345" << endl;

    appendFile.close();

    cout << "\nName and Roll Number appended successfully." << endl;

    return 0;
}
