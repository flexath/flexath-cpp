#include <iostream>

using namespace std;

int storage();

int main() {
	storage();
	storage();
}

int storage() {
	static int b = 100;
	b++;
	cout << "Static local variable used in function ; " << b << endl;
	return b;
}