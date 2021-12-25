#include <iostream>

using namespace std;

class calculation {
private:
    int num1;
    int num2;
public:
    int ath = 10;
    int add(int a , int b) {
        num1 = a;
        num2 = b;
        int c = num1 + num2;
        return c;
    }

    int subt(int a , int b) {
        num1 = a;
        num2 = b;
        int c = num1 - num2;
        return c;
    }

};

int main()
{
    calculation cal;
    cout << cal.ath << endl;
    cout << cal.add(5,10) << endl;
    cout << cal.subt(100,32) << endl;

    return 0;
}
