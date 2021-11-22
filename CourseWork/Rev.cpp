#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i,j,k;
//	ONE-DIMENSIONAL ARRAY
	int one_d_array[5] = {1,2,3,4,5};
	cout << "One-Dimensional Array:" << endl;
	for(i=0;i<5;i++) {
		cout << "[" << i << "] = "<< one_d_array[i] << endl;
	}
	cout << endl;
	
//	TWO-DIMENSIONAL ARRAY
	int two_d_array[2][3] = {
		{1,2,3},
		{4,5,6}
	};	
	cout << "Two-Dimensional Array:" << endl;
	for(j=0;j<2;j++) {
		for(k=0;k<3;k++) {
			cout << "[" << j << "]" << "[" << k << "] = " << two_d_array[j][k] << endl;
		}
	}
	cout << endl;

//	MULTIDIMENSIONAL ARRAY
	int mult_array[2][3][4] = {
		{ 
			{1,2,3,4}, 
			{5,6,7,8}, 
			{9,10,11,12}
		},
		{ 
			{13,14,15,16},
			{17,18,19,20},
			{21,22,23,24}
		}
	};
	cout << "Multidimensional Array:" << endl;
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			for(k=0;k<4;k++) {
				cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "] = " << mult_array[i][j][k] << endl;
			}	
		}
	}

	return 0;
}