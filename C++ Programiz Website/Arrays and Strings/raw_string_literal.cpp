#include <iostream>

int main(){
    //Using normal string literals
    const char* name = "Flexath\nMiHnin";
    std::cout << name << std::endl;

    // Using raw string literals
    const char* name1 = R"(Flexath\nMiHnin)";
    std::cout << name1 << std::endl;

}