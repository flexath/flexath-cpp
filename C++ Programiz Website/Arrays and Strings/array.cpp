#include <iostream>

using namespace std;

int main() {

	// 2D array
	int twoD[3][2] = { {1,2} , {3,4} , {5,6} };

	// 3D array
	int threeD[3][2][3] = { {{1,2,3},{4,5,6}} , {{7,8,9},{10,11,12}} , {{13,14,15},{16,17,18}} };

	cout << twoD[2][1] << endl;
	cout << threeD[2][1][1] << endl;

	return 0;
}
