#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int count = 0;

class alpha {
	public:
		alpha() {
			count++;
			cout << "\nNo of objects created:" << endl;	 
		}
		~alpha() {
			cout << "\nNo of objects destroyed:" << endl;
		}
};


int main(int argc, char** argv) {
	cout << "\n\nEnter main:\n\n" << endl;
	alpha A1, A2, A3, A4;
	{
		cout << "\n enter block 1\n";
		alpha A5;
	}
	{
		cout << "\n enter block 2\n";
		alpha A6;
	}
	cout << "\n re-enter main:\n";
	return 0;
}
