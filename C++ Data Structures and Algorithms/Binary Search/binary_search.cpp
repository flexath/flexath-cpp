#include <iostream>
#include <string>
#include <array>
#include <memory>
#include <bits/stdc++.h>

#define SIZE 17

class BinarySearch{
  private:
    int m_start,m_end,m_mid;
    std::array<int,SIZE> num;
  public:
    BinarySearch(std::array<int,SIZE> &num) : num(num)
    {
      m_start = 0;
      m_end = num.size()-1;
      
      
      for(int i = 0 ; i < num.size() ; i++){
        std::cout << num[i] << " , ";
      }
      std::cout << std::endl;
    }

    bool find_with_iteration(int x){
      while(m_start <= m_end ){
        m_mid = m_start+(m_end-m_start)/2;       // overflow fixed
        if(x == num[m_mid]){
          return true;
        }
        else if(x < num[m_mid]){
          m_end = m_mid-1 ;
        }
        else{
          m_start = m_mid+1;
        }
      }
      return false;
    }

    bool find_with_recursion(int x,int start,int end){
      this->m_start = start;
      this->m_end = end;
      this->m_mid = this->m_start+(this->m_end-this->m_start)/2;       // overflow fixed
      if(this->m_start > this->m_end) return false;
      if(x == num[this->m_mid]){
        return true;
      }
      else if(x < num[this->m_mid]){
          return find_with_recursion(x,this->m_start,this->m_mid-1);
      }
      else{
        return find_with_recursion(x,this->m_mid+1,this->m_end);
      }
    }
    
    int occurence(int x,bool button){
      int occu = -1 ;
      while(m_start <= m_end ){
        m_mid = m_start+(m_end-m_start)/2;
        if(x == num[m_mid]){
          occu = m_mid;
          if(button == true) m_end = m_mid - 1 ;            // for first occurence
          else m_start = m_mid + 1 ;          // for second occurence

        }
        else if(x < num[m_mid]){
          m_end = m_mid-1 ;
        }
        else{
          m_start = m_mid+1;
        }
      }
      return occu;
    }
};

int main(){
  std::array<int,SIZE> number = {11,5,3,5,7,1,9,2,0,6,10,19,5,21,15,5,16};
  std::sort(number.begin(),number.end());
  BinarySearch bs = BinarySearch(number);
  
  int first = bs.occurence(5,true);
  std::cout << "first : " << first << std::endl;
  if(first == -1) std::cout << "Element doesn't exist" << std::endl;
  else{
    BinarySearch bs = BinarySearch(number);
    int second = bs.occurence(5,false);
    std::cout << "Second : " << second << std::endl;
    int count = (second-first)+1;
    std::cout << "Count is " << count << std::endl;
  }
  // bool result = bs.find_with_recursion(11,number.front(),number.back());
  // result == true ? std::cout << "Found" : std::cout << "Not Found" ;
}