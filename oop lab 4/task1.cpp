#include <iostream>
using namespace std;

class Employee {
	
	private:
		int id;
		string name;
		float salary;
	
	public:	
		Employee(){
			id=0;
			name="not assigned";
			salary=0.0; }
			
		void displayDetails(){
				cout << "The id is "  << id << ". The name is " << name << ". The salary is " << salary  << "."<< endl;
			}
		
};


int main(){
	Employee e1;
	e1.displayDetails();
	return 0;
}
