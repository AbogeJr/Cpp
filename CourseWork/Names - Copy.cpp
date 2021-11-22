#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	
	int i, s, *ptr;
	int arr[5];
	cout << "Enter 5 array elements: " <<endl;
	for(i=0;i<5;i++) {
		cin >> arr[i];			//Initializing array
	}
	ptr = &arr[0];			//Pointing to first element in array
	s = *ptr;      
	while(*ptr) {
		if( *ptr < s) {
			s = *ptr;			//Assigns smallest no. to variable 's' during traversal				
		}
		ptr++;
	}
	cout << "Smallest no. in array is:" << s << endl;
	return 0;
}

