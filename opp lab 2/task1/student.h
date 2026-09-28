#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
	public:
	string name;
	int rollNumber;
	float marks;
	
	void getData (){
		cout << "Enter name" << endl;
		cin >> name;
		
		cout << "Enter Roll Number" << endl;
		cin>> rollNumber;
		
		cout << "Enter Marks"<< endl;
		cin>>marks;
		
	}
	
	void displayData (){
		cout << "Name:" << name << endl;
		cout << "RollNumber :" << rollNumber << endl;
		cout << "Marks :" << marks  << endl;
	}
};

#endif 
