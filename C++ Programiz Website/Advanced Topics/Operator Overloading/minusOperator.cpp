#include <iostream>


class Point{
public:
    int x ;
    int y ;
    Point(int a , int b) : x{a} , y{b} {

    }
    Point operator - (const Point& pt4){
        Point p(x,y);
        p.x = x - pt4.x;
        p.y = y - pt4.y;
        return p;
    }
    void print(){
        std::cout << "x : " << x << "\ny : " << y <<std::endl;
    }
};

int main()
{
    Point pt1(10,25),pt2(12,3);
    Point pt3 = pt1 - pt2 ;
    pt3.print();
}
