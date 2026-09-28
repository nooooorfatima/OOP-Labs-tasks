#include <iostream>
using namespace std;

class Locker{
	private:
		int locker2 ;
		
	
	public:
		Locker(){
			cout << "Locker allocated to customer" << endl;
			}
		
		~Locker(){
			cout << "Locker returned by customer" << endl;
		}
};


int main(){
	
	cout << "Entered block" << endl;{
			Locker l1;
	cout <<" Block exited" << endl;
     }

    Locker* l2= new Locker;
    delete l2;
	
}
