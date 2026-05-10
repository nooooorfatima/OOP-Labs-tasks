#include <iostream>
#include "rectangle.h"  

using namespace std;
int main(){
	
	Rectangle x;
	x.setDimension();
	cout << "The area is " << x.area() << " Square Centimeters." << endl;
	cout << "The perimeter is " << x.perimeter() << " centimeters."<< endl;
     return 0;
	
}
