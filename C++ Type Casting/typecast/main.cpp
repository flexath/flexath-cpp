#include <iostream>
#include <istream>

class Num{
public:
    enum enumeration{num1,num2,num3};
    friend std::istream& operator >>(std::istream& is ,Num& number);
};

std::istream& operator >>(std::istream& is ,Num& number){
    is >> number ;
}

int main()
{
    Num num;
    std::cin >> num ;
//    if(num == num.num1){
//        std::cout << "This is num 1" << std::endl;
//    }
//    else if(num == num2){
//        std::cout << "This is num 2" << std::endl;
//    }
//    else if(num == num3){
//        std::cout << "This is num 3" << std::endl;
//    }
//    else{
//        std::cout << "None ! " << std::endl;
//    }
}
