#include <iostream>
using namespace std;

template<class ath>

ath add(ath a, ath b) {
  
    return a + b;
}


int main()
{
    float d = 5.4;
    float e = 8;

    cout << add(d, e) << endl;
}