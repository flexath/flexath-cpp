#include <iostream>
#include <memory>

int main()
{
        std::shared_ptr<int> shPtr1  = std::make_shared<int>(100);
        std::cout << "shPtr1 pointing value : " << *shPtr1 << std::endl;
        std::cout << "shPtr1 Owners count : " << shPtr1.use_count() << std::endl;

        std::weak_ptr<int> wePtr1 = shPtr1;
        //std::cout << "shPtr1 pointing value : " << *wePtr1 << std::endl;               // this line will show error
        std::cout << "wePtr1 Owners count : " << wePtr1.use_count() << std::endl;
}
