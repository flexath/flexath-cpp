#include <iostream>
#include <string>

class Entity{
    public:
        int m_speed;
        std::string msg;
        explicit Entity(int speed) : m_speed(speed)
        {
            std::cout << "Speed is " << m_speed << std::endl;
        }
        explicit Entity(const std::string& text) : msg(text)
        {
            std::cout << "Text is " << msg << std::endl;
        }
};

int main(){
    // this code will pop up error because of explicit keyword
    // this keyword prevent implicit conversion
    Entity en1 = 1000 ;
    Entity en1 = std::string("Aung Thiha") ;
}