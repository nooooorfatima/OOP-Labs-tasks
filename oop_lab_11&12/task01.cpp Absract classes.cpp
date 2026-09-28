#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Open notes.txt in read mode
    ifstream file("notes.txt");

    // Check if file opened successfully
    if (!file)
    {
        cout << "Error: notes.txt could not be opened." << endl;
        return 1;
    }

    string line;
    int lineCount = 0;

    // Read the file and count lines
    while (getline(file, line))
    {
        lineCount++;
    }

    file.close();

    // Display total line count
    cout << "Total number of lines in notes.txt: "
         << lineCount << endl;

    return 0;
}
