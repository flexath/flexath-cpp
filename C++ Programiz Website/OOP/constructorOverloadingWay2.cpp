#include <iostream>

using namespace std;

class calculation {
private:
    int num1;
    int num2;

    int num3;

public:
    calculation(int a,int b);
    calculation(int a);
};

calculation::calculation(int a,int b) {
        num1 = a;
        num2 = b;
        cout << num1 + num2 << endl;
        cout << "Aung Thiha" << endl;
    }

calculation::calculation(int a) {
        int e = 10;
        num3 = a;
        cout << num3 << endl;
        cout << "Abe Shake Kumar" << endl;
    }



int main()
{
    calculation cal1(4, 3), cal2(5);

    return 0;
}
