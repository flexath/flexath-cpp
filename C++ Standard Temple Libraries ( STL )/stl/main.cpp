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
        std::weak_ptr<Name> wePtr1  = std::make_shared<Name>();
        std::cout << "Owners count : " << wePtr1.use_count() << std::endl;
    }

    //Following two lines will show error because unPtr1 lifetime is expired after {} scope
    std::weak_ptr<Name> wePtr2  = wePtr1;
    std::cout << "Owners count : " << wePtr2.use_count() << std::endl;

}
