#include <iostream>

using namespace std;

class A {
private:
	int pri = 10;
protected:
	float pro = 20;
public:
	friend void friend_function(A fri);
};

void friend_function(A fri) {
	cout << "Private data of Class A : " << fri.pri << endl;
	cout << "Protected data of Class A : " << fri.pro << endl;
}


int main() {
	A obj;
	friend_function(obj);
}
