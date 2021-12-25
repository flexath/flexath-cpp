#include <iostream>

using namespace std;

int storage(int);

int main() {
	short local = 5;
	cout << "Local variable used alone ; " << local << endl;
	cout << storage(local) << endl;
}

int storage(int b) {
	b = 100;
	cout << "Local variable used in function ; "<< b << endl;
	return b;
}