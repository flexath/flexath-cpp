#include <iostream>
using namespace std;

void display(int number[3][2]);

int main()
{
    int num[3][2] = { {3, 4},{9, 5},{7, 1} };
    display(num);
    return 0;
}

void display(int number[3][2])
{
    cout << "Displaying Values: " << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int ii = 0; ii < 2; ++ii)
        {
            cout << number[i][ii] << " ";
        }
    }
}