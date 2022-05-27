#include <iostream>

void swap(int &x,int &y){
    int temp = x ;
    x = y ;
    y = temp;
}

void selectionSort(int num[],int n){
    std::cout << "Worst case : O(n**2)" << std::endl;
    for(int i = 0 ; i < n-1 ; i++){
        int min_value = i ;
        for(int j = i+1 ; j < n ; j++){
            if(num[j] < num[min_value]){
                min_value = j ;
            }
        }
        swap(num[i],num[min_value]);
        // int temp = num[i];
        // num[i] = num[min_value];
        // num[min_value] = temp;
    }
}

int main(){
    int num[] = {3,5,2,8,1,4,9};
    selectionSort(num,7);
    for(int i = 0 ; i < 7 ; i++){
        std::cout << num[i] << " ";
    }
}