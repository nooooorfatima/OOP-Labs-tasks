#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("notes.txt");

    // Check if file opened successfully
    if (!file)
    {
        cout << "Error: File could not be opened." << endl;
        return 1;
    }

    string line;
    int lineCount = 0;

    // Count each line in the file
    while (getline(file, line))
    {
        lineCount++;
    }

    file.close();

    // Display total number of lines
    cout << "Total number of lines in notes.txt: " << lineCount << endl;

    return 0;
}
