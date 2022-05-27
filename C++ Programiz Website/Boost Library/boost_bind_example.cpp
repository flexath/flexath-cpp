#include <iostream>
#include <boost/bind.hpp>
#include <functional>

using namespace std;

int func(int a , int b){
  //cout << a + b << endl;
  return a*b;
}

int main(){
  cout << "Hello" << endl;
  auto fun = boost::bind(func,7,20);
  cout << fun();
}
