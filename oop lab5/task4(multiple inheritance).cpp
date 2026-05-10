# include <iostream>
using namespace std;

class Printer{
	public:
	void print_document(){
		cout << "Printing Document." << endl;
	}
};

class Scanner{
	public:
	void scan_document(){
		cout << "Scanning Document." << endl;
	}
};

class Photocopier : public Printer , public Scanner {
	public:
	void photocopy(){
		
	cout << "Photocopying the Document." << endl;
		print_document();
		scan_document();
	}
};



int main(){
	Photocopier p1;
	p1.photocopy();
	
	return 0;
}
