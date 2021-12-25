#include<iostream> 
using namespace std;

namespace firstone {
    void fun()
    {
        cout << "This is the first NS" << endl;
    }
}

namespace secondone {
    void fun()
    {
        cout << "This is the second NS" << endl;
    }
}

int main()
{
    firstone::fun();
    secondone::fun();
}