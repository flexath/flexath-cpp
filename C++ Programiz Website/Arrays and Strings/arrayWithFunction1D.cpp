#include <iostream>

using namespace std;

void student(int age[5]);

int main() {
	int age_of_student[5] = {21,23,25,17,19};
	student(age_of_student);
	return 0;
}

void student(int age[5]) {
	for (int i = 0; i <= 4; i++) {
		cout << "Student " << i << " = " << age[i] << endl;
	}
}
