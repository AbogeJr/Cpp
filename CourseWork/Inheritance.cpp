#include <iostream>

using namespace std;

class Parent {
	public:
		int id_p;
};

class Child : public Parent {
	public:
		int id_c;
};
int main(int argc, char** argv) {
	Child obj1;
	obj1.id_c = 2021;
	obj1.id_p = 1921;
	
	cout << "Chid id is " << obj1.id_c << endl;
	cout << "Parent id is " << obj1.id_p << endl;
	
	return 0;
}

