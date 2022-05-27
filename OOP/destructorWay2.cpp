#include <iostream>

using namespace std;

class calculation {
private:
    int num1;
    int num2;
public:

    calculation(int a, int b) {
        num1 = a;
        num2 = b;
        cout << num1 + num2 << endl;
        cout << "Aung Thiha" << endl;
    }

    ~calculation();

    
};

calculation::~calculation() {
    cout << "Program ends ! " << endl;
}

int main()
{
    calculation cal(1, 2);

    return 0;
}
