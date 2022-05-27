#include <iostream>
using namespace std;

struct Person {
	char name[50];
	int age;
	float salary;
};

int main()
{
	Person ath;
	//ath.name[50] = "Aung Thiha";
	//ath.age = 22;
	//ath.salary = 200000;

	cout << "Enter Name : " << endl;
	cin.get(ath.name, 50);
	cout << "Your name is " << ath.name << endl;

	cout << "Enter Age : " << endl;
	cin >> ath.age;
	cout << "Your age is " << ath.age << endl;
	
	cout << "Enter Salary : " << endl;
	cin >> ath.salary;
	cout << "Your salary is " << ath.salary << endl;

	
}


