#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("C:\\Users\\Aung Thiha\\Desktop\\ath.txt");

    //file << "Aung Thiha is Batman" << endl;
    file.write("Aung Thiha is Batman",20);                 // 20 is maximum characters of first argument

    file.close();
}
