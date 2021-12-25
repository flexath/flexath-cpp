#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("C:\\Users\\Aung Thiha\\Desktop\\ath.txt");

    if (file.is_open()) {
        //file << "Aung Thiha is Batman" << endl;
        file.write("Aung Thiha is Joker", 20);                 // 20 is maximum characters of first argument
        cout << "Text is added to file" << endl;
    }

    
    file.close();
}
