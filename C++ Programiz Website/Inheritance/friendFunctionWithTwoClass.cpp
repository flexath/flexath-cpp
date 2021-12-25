#include <iostream>

using namespace std;

class B;
class A {
private:
	int priA = 10;
protected:
	float proA = 20;
public:
	friend int friend_function(A friA, B friB);
};

class B {
private:
	int priB = 30;
protected:
	float proB = 40;
public:
	friend int friend_function(A friA, B friB);
};



int friend_function(A friA , B friB) {
	int add = (friA.priA + friA.proA) + (friB.priB + friB.proB);
	return add;
}


int main() {
	A obj1;
	B obj2;
	int ans = friend_function(obj1 , obj2);
	cout << ans << endl;
}
