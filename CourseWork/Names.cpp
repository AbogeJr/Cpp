#include <iostream>
#include <conio.h>

using namespace std;

class abc {
	private:
		char nm[];
	public:
		abc() {
			cout << "Enter Name:" << endl;
			cin >> nm;
		}	
		void display() {
			cout << nm << endl;
		}
};

int main(int argc, char** argv) {

	abc obj;
	obj.display();
	getch();
	
	return 0;
}

