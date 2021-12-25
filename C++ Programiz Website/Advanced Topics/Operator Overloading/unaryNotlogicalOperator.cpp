#include <iostream>


class Point{
public:
    int x ;
    int y ;
    Point(bool a , bool b) : x{a} , y{b} {

    }
    Point operator ! (){
//        Point p(x,y);
//        p.x = -p.x;
//        p.y = -p.y;
//        return p;
          return Point(!x,!y);
    }
    void print(){
        std::cout << "x : " << x << "\ny : " << y <<std::endl;
    }
};

int main()
{
    Point pt1(true,false);
    Point pt3 = !pt1;           // change true to zero and false to one
    pt3.print();
}
