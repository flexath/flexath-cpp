#include <iostream>

using namespace std;

class calculation {
private:
    int num1;
    int num2;
    int num3;

public:
    int num = 999;

    calculation(int a, int b) {
        num1 = a;
        num2 = b;
        cout << num1 + num2 << endl;
        cout << "Aung Thiha" << endl;
    }
    calculation(int a) {
        int e = 10;
        num3 = a;
        cout << num3 << endl;
        cout << "Abe Shake Kumar" << endl;
    }
};

int main()
{
    calculation cal1(4, 3), cal2(5);

    calculation cal3 = cal2;

    cout << "The default copy constructor value is " << cal3.num << endl;



    return 0;
}
