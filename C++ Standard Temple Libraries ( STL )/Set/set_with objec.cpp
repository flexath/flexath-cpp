#include <iostream>
#include <string>
#include <memory>
#include <set>

class Entity{
    public:
        int a;
        Entity(int x):a(x)
        {
            // std::cout << a << std::endl;
        }
        bool operator < (const Entity& en)const{
            return a < en.a ;
        }
        bool operator > (const Entity& en)const{
            return a > en.a ;
        }
        friend std::ostream& operator << (std::ostream& stream,const Entity& obj);
};

std::ostream& operator << (std::ostream& stream,const Entity& obj){
    stream << obj ;
    return stream;
}

int main(){
    Entity e1(1);
    Entity e2(10);
    Entity e3(3);
    Entity e4(4);
    Entity e5(5);
    std::set<Entity,std::greater<Entity>> obj = {e1,e2,e3,e4,e5};
    for(auto&o : obj){
        std::cout << o.a << std::endl;
    }
}