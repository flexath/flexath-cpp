#include <iostream>

void insertionSort(int num[],int n){
    std::cout << "Worst case : O(n**2)" << std::endl;
    for(int i = 1 ; i < n ; i++){
        int key = num[i];
        int j = i-1 ;
        while(key < num[j] && j >= 0){
            num[j+1] = num[j] ;
            j--;
        }
        num[j+1] = key;
    }
}

int main(){
    int num[] = {3,5,2,8,1,9,4};
    insertionSort(num,7);
    for(int i = 0 ; i < 7 ; i++){
        std::cout << num[i] << " ";
    }
}