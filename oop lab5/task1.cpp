#include <iostream>
using namespace std;

class Person{
	private:
		string name;
		int age;
		
	public:
		
		void input_person_info(){
			cout << "Enter Name " ;
			getline( cin , name );
			
			cout << "Enter Age ";
			cin >> age;
			cin.ignore();
			
			}
	    void display_person_info(){
	    	cout << "Name: " << name <<endl;
			cout << "Age: " << age << endl;
			}
			
	
};

class Student : public Person{
	private:
		string student_id;
	public:
	void input_student_info(){
		cout << "Enter Student ID: " ;
		getline( cin , student_id);
	}
	
	void display_student_info(){
			cout << "Student ID: " << student_id <<endl;
			
		}
	};
	
	
int main() {
    Student s;

    s.input_person_info();
    s.input_student_info();


    s.display_person_info();   
    s.display_student_info();  

    return 0;
}

