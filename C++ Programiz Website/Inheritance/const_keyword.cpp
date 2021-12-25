#include <iostream>

class PrintNumber{
public:
  const int first = 10;
};

int main(){
  PrintNumber no;
  no.first = 20;              // this line show error because of const keyword
  std::cout << no.first << std::endl;
}
