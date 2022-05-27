#include <iostream>
using namespace std;

struct Person {
	char name[50];
	int age;
	float salary;
};

Person getData(Person ath);
void displayData(Person abe);

Person romeo;

int main()
{

	romeo = getData(romeo);
	displayData(romeo);

	return 0;
}

Person getData(Person ath) {
	cout << "Enter Name : " << endl;
	cin.get(ath.name, 50);

	cout << "Enter Age : " << endl;
	cin >> ath.age;

	cout << "Enter Salary : " << endl;
	cin >> ath.salary;

	return ath;
}

void displayData(Person abe) {
	cout << "Your name is " << abe.name << endl;
	cout << "Your age is " << abe.age << endl;
	cout << "Your salary is " << abe.salary << endl;
}