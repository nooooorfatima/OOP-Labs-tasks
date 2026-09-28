#include <iostream>
#include "voter.h"  

using namespace std;

int main() {
    Voter v1;   

    cout << "Enter voter name: ";
    cin >> v1.name;

    cout << "Enter voter age: ";
    cin >> v1.age;

    if (v1.isEligible()) {
        cout << "The voter is eligible to vote." << endl;
    } else {
        cout << "The voter is not eligible to vote." << endl;
    }

    return 0;
}
