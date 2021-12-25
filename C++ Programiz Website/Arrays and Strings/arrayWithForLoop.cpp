#include <iostream>

using namespace std;

int main() {

	// 2D array
	int twoD[3][2] = { {5,2} , {100,4} , {57,63} };

	// 3D array
	int threeD[3][2][3] = { {{1,2,3},{4,5,6}} , {{7,8,9},{10,11,12}} , {{13,14,15},{16,17,18}} };

	cout << "It is 2D array for loop" << endl;

	for (int i = 0; i <= 2; i++) {
		for (int ii = 0; ii <= 1; ii++) {
			cout << twoD[i][ii] << endl;
		}
	}

	cout << "\nIt is 3D array for loop " << endl;

	for (int i = 0; i <= 2; i++) {
		for (int ii = 0; ii <= 1; ii++) {
			for (int iii = 0; iii <= 2; iii++) {
				cout << threeD[i][ii][iii] << endl;
			}
			
		}
	}

	return 0;
}
