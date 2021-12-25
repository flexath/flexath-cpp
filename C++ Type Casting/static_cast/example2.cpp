// Use static_cast when conversion between types is provided through conversion operator and conversion constructor

#include <iostream>

class Type{
private:
    int x;
public:
    Type(int a):x(a){}

    operator std::string(){
        return std::to_string(x);
    }
};

int main()
{
    Type type(100);

    // C-style casting
    std::string num = type;        // Conversion operator
    type = 30;                     // Conversion constructor
    std::cout << num << " , " << typeid(num).name() << std::endl;

    // static_cast
    std::string num2 = static_cast<std::string>(type);
    type = static_cast<Type>(40);
    std::cout << num2 << " , " << typeid(num2).name() << std::endl;
}
