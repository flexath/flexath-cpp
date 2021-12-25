#include <iostream>


class Point{
public:
    int x ;
    int y ;
    Point(int a , int b) : x{a} , y{b} {

    }
    Point operator - (){
//        Point p(x,y);
//        p.x = -p.x;
//        p.y = -p.y;
//        return p;
          return Point(-x,-y);
    }
    void print(){
        std::cout << "x : " << x << "\ny : " << y <<std::endl;
    }
};

int main()
{
    Point pt1(10,5);
    Point pt3 = -pt1;
    pt3.print();
}
