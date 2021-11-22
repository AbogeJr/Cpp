//INSERTION OF AN ELEMENT TO THE END OF AN ARRAY
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int num, i;
	int arr[5] = {1,2,3,4,5};
	
	cout << "Array before insertion:" << endl;
	for(i=0;i<5;i++) {
		cout << "[" << i << "] = " << arr[i] << endl;
	}
	
	cout << "Enter element to insert to end:" << endl;
	cin >> num;
	arr[4] = num;
	
	cout << "Array after insertion:" << endl;
	for(i=0;i<5;i++) {
		cout << "[" << i << "] = " << arr[i] << endl;
	}
	return 0;
}