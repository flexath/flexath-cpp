#include <iostream>

using namespace std;

int factorial(int n);


int main() {
	int num;
	cin >> num;
	cout << num << " = "  << factorial(num);
}

int factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}