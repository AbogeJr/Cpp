//DELETION OF AN ELEMENT FROM ARRAY
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int k, i;
	int arr[5] = {1,2,3,4,5};

	cout << "Array before deletion:" << endl;
	for(i=0;i<5;i++) {
		cout << "[" << i << "] = " << arr[i] << endl;
	}
	
	cout << "Enter element position to delete:" << endl;
	cin >> k;
	for(i=k-1;i<5;i++) {
		arr[i] = arr[i+1];
	}
	
	cout << "Array after deletion:" << endl;
	for(i=0;i<5;i++) {
		cout << "[" << i << "] = " << arr[i] << endl;
	}
	return 0;
}