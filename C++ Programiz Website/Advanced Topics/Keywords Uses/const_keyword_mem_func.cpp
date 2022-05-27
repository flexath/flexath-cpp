#include <iostream>

class Entity{
private:
    int m_X,m_Y;
public:
    int SetX(int x){
        m_X = x ;
        return m_X;
    }
    int GetX(int x)const{
        m_X = x ;
        return m_X;
    }
};

int main(){
    // this code will pop up error
    Entity *ptr = new Entity;
    int x = ptr->SetX(11);
    int xx = ptr->GetX(x);
    std::cout << xx << std::endl;
}