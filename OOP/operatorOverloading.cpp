#include <iostream>
using namespace std;

class Test
{
private:
    int count = 5;

public:

    void operator ++()
    {
        count = count + 100;
    }
    void Display() { cout << "Count: " << count; }
};

int main()
{
    Test t;
    ++t;
    t.Display();
    return 0;
}