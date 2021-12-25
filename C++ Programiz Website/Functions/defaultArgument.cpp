#include <iostream>

using namespace std;

int defaulter(int b = 100);


int main() {
	int d = 7;
	cout << defaulter(d) << endl;
}

int defaulter(int b) {
	return b;
}