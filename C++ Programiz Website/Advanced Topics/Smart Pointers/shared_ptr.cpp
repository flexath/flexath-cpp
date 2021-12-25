#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> shPtr1 = std::make_shared<int>(100);
    std::cout << "shPtr1 pointing value : " << *shPtr1 << std::endl;
    std::cout << "Shared owners count : " << shPtr1.use_count() << std::endl;

    std::shared_ptr<int> shPtr2 = shPtr1;
    std::cout << "\nshPtr2 pointing value : " << *shPtr2 << std::endl;
    std::cout << "shPtr1 pointing value : " << *shPtr1 << std::endl;
    std::cout << "Shared owners count : " << shPtr2.use_count() << std::endl;
}
