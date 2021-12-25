#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;

	try {
		if (a == 1) {
			throw 1;
		}
		else if (a == 2) {
			throw 'A';
		}
		else if (a == 3) {
			throw 4.5;
		}
		else if (a == 4) {
			int b = 5;
			throw &b;
		}
		else {
			cout << "Wrong" << endl;
		}
	}

	catch (int a) {
		cout << "Integer is caught - " << a << endl;
	}
	catch (char a) {
		cout << "Char is caught - " << a << endl;
	}
	catch (double a) {
		cout << "Double is caught - " << a << endl;
	}
	catch (int *a) {
		cout << "Address value is caught - " << *a << endl;
	}
	cout << "Program ends" << endl;
	return 0;
}