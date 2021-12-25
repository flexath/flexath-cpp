#include <iostream>
using namespace std;

struct Number {
	int num1 = 10;
	float num2 = 5.8;
};

int main()
{
	Number *num , d;

	num = &d;

	cout << d.num1 << endl;
	cout << d.num2 << endl;

	cout << (*num).num1 << endl;
	cout << (*num).num2 << endl;

	// alternative notation
	cout << num->num1 << endl;
	cout << num->num2 << endl;

	return 0;
}