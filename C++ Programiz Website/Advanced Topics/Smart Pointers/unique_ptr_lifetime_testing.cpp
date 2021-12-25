#include <iostream>
#include <memory>

class Name{

public:
    Name(){
        std::cout << "Constructor is invoked" << std::endl;
    }
    ~Name(){
        std::cout << "Destructor is invoked" << std::endl;
    }
    void print(){
        std::cout << "The function inside Name class is called " << std::endl;
    }
};

int main()
{
    {
        std::unique_ptr<Name> unPtr  = std::make_unique<Name>();
    }
    //unPtr->print();              // This line will show error because unPtr's lifetime is expired after above {} scope
}
