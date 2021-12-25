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
        std::shared_ptr<Name> shPtr1  = std::make_shared<Name>();
        std::cout << "Owners count : " << shPtr1.use_count() << std::endl;
    }

    //Following two lines will show error because unPtr1 lifetime is expired after {} scope
    std::shared_ptr<Name> shPtr2  = shPtr1;
    std::cout << "Owners count : " << shPtr2.use_count() << std::endl;

}
