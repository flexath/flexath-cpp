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

using namespace firstone::secondone;

int main()
{
    fun();
}