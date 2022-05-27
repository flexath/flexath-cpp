#include <iostream>

void swap(int &x,int &y){
    int temp = x ;
    x = y ;
    y = temp;
}

void bubbleSort(int num[],int n){
    std::cout << "Worst case : O(n**2)" << std::endl;
    for(int i = 0 ; i < n-2 ; i++){
        int k = 1;
        for(int j = 0 ; j < n-k-1 ; j++){
            if(num[j] > num[j+1]){
                swap(num[j],num[j+1]);
                k++;
            }
        }
    }
}

int main(){
    int num[] = {3,5,2,8,1,4,9};
    bubbleSort(num,7);
    for(int i = 0 ; i < 7 ; i++){
        std::cout << num[i] << " ";
    }
}