#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("C:\\Users\\Aung Thiha\\Desktop\\ath.txt");
    char ch;

    while (fin)
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();
    
}