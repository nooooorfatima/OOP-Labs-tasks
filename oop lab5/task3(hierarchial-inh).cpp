#include <iostream>
using namespace std;

class Employee {
	private:
	string name;
	int salary;
	
	public:
		
		Employee ( string n, int s){
			name=n;
			salary=s;
		}
		
		void display_employee(){
			cout << "Name: " << name << endl;
			cout << "Salary: " << salary << endl;
		}
};


class Developer : public Employee{
	private:
		string programming_language;
	public:
	    Developer(string n, int s, string p) : Employee( n, s){
	    	programming_language=p;
		}	
		
		void display_developer(){
			cout << "Programming language: " << programming_language << endl;
		}
	
};


class Designer : public Employee{
	private:
		string design_tool;
	public:
	    Designer(string n,int s,  string d) : Employee( n ,s ){
	    	design_tool=d;	
		}
	    
	    void display_designer(){
	    	cout << "Design Tool: " << design_tool << endl;
		}
	
};


int main(){
	
	Developer developer1 ("noor" , 1000 , "Java" );
	developer1.display_employee();
	developer1.display_developer();
		
		
	Designer designer1("sara" , 1500  , "Canva");
	designer1.display_employee();
	designer1.display_designer();	
	
	
	return 0;
}
