#include <iostream>
using namespace std;

struct Person {
	char name[50];
	int age;
	float salary;
};

void displayData(Person abe);

int main()
{
	Person ath;

	cout << "Enter Name : " << endl;
	cin.get(ath.name, 50);

	cout << "Enter Age : " << endl;
	cin >> ath.age;

	cout << "Enter Salary : " << endl;
	cin >> ath.salary;

	displayData(ath);
	

	return 0;
}

void displayData(Person abe) {
	cout << "Your name is " << abe.name << endl;
	cout << "Your age is " << abe.age << endl;
	cout << "Your salary is " << abe.salary << endl;
}
