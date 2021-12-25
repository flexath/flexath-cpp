#include <iostream>

using namespace std;

int overload(int b);
float overload(float c);

int main() {
	int aa = 7;
	float bb = 10.5;
	cout << a(aa) << endl;
	cout << a(bb) << endl;

}

int overload(int b) {
	return b;
}

float overload(float b) {
	return b;
}