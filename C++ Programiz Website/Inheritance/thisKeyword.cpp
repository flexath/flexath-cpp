#include <iostream>
using namespace std;

class number{
public:
	int a = 5;

	void func(int a){
		this->a;
		cout << a << endl;
		cout << "Using this keyword : " << this->a << endl;
}

};

int main()
{
	number num;
    num.func(10);
}