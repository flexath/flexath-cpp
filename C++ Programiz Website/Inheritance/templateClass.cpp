#include <iostream>
using namespace std;

template<class ath>
class BaseClass {
public:
    ath a;
    ath b;

    ath add(ath aa, ath bb) {
        a = aa;
        b = bb;
        ath c = a + b;
        return c;
    }
};



int main()
{
    BaseClass<int> obj1;
    cout << obj1.add(5.4, 4.3) << endl;

    BaseClass<float> obj2;
    cout << obj2.add(5.4, 4.3) << endl;
}
