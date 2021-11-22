//REVERSING ELLEMENTS OF AN ARRAY
#include <iostream>
using namespace std;

void reverse_array(int arr_1[]); 

int main(int argc, char** argv) {
	int num, i;
	int arr[5];
	
	cout << "Enter 5 array elements:" << endl;
	for(i=0;i<5;i++) {
		cin >> arr[i];
	}
	
	cout << "Array before reversal:" << endl;
	for(i=0;i<5;i++) {
		cout << "[" << i << "] = " << arr[i] << endl;
	}
	
	reverse_array(arr);
	
	cout << "Array after reversal:" << endl;
	for(i=0;i<5;i++) {
		cout << "[" << i << "] = " << arr[i] << endl;
	}
	return 0;
}

void reverse_array(int arr_1[]) {
	int i, j, arr_2[5];
	for(i=0, j=4;i<5, j>=0;i++, j--) {
	    arr_2[i] = arr_1[j];	
	}
	for(i=0;i<5;i++) {
		arr_1[i] = arr_2[i];
	}
}