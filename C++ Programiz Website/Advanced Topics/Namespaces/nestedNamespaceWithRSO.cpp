// RSO is resolution scope operator

#include<iostream> 
using namespace std;

namespace firstone {
    namespace secondone {
        void fun()
        {
            cout << "This is the second NS" << endl;
        }
    }
}

int main()
{
    firstone::secondone::fun();
}