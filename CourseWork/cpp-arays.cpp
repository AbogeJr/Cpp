//PRINTING 3D ARRAY USING NESTED FOR LOOP
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	int i,j,k;
	
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