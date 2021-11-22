#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class abc {
	private:
		char nm[30];
		int age;
	public:
		abc() {}
		abc(char x[], int y);
		
		void get() {
			cout << "Enter your name:" << endl;
			cin >> nm;
			cout << "Enter your age:" << endl;
			cin >> age;
		}	
	void display() {
		cout << nm << endl;
		cout << age << endl;
	}	
};

	abc::abc(char x[], int y) {
		strcpy(nm, x);
		age = y;
	}

int main(int argc, char** argv) {
	
	abc obj1;
	abc m = abc("Computer", 20000);
	obj1.get();
	obj1.display();
	m.display();
	getch();
	
	return 0;
}
