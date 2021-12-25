#include <iostream>


class Point{
public:
    int num[2];
    Point(int a , int b){
        num[0] = a ;
        num[1] = b ;
    }
    int& operator [] (int index){
        if(index == 0) return num[0];
        else if(index == 1) return num[1];
        else std::cout << "Out of bound" << std::endl;
    }
    void print(){
        std::cout << "x : " << num[0] << "\ny : " << num[1] <<std::endl;
    }
};

int main()
{
    Point pt1(5,10);
    pt1[0] = 17;
    pt1[1] = 49;
    pt1.print();
}
