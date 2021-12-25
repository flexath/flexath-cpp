#include <iostream>

using namespace std;

int storage(int);

int global = 5;
int main() {
	cout << "Global variable used alone ; " << global << endl;
	cout << "Global variable used in storage function ; " << storage(global) << endl;
}

int storage(int b) {
	b = global;
	return b;
}