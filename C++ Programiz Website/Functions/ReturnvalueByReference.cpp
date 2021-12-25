#include <iostream>

using namespace std;

int& reference();

int num;

int main() {
	reference() = 5;
	cout << num << endl;
}

int& reference() {
	return num;
}