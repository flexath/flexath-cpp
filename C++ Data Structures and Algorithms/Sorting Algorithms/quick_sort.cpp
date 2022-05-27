#include <iostream>

void swap(int &x , int &y){
    int temp = x ;
    x = y ;
    y = temp ;
}

int partition(int num[] , int start , int end ){
    //int pivot = num[end] ;
    int par_index = start ;
    for(int i = start ; i < end ; i++){
        if(num[i] <= num[end]){
            swap(num[i],num[par_index]);
            par_index++;
        }
    }
    //std::cout << "num end value : " << num[end] << std::endl;
    swap(num[par_index],num[end]);
    return par_index;
}

void quickSort(int num[] , int start , int end ){
    //std::cout << "Worst Case : O(nlogn)" << std::endl;
    if(start < end){
        int pivot = partition(num,start,end);
        quickSort(num,start,pivot-1);
        quickSort(num,pivot+1,end);
    }
}

int main(){
    int num[] = {3,5,2,8,1,4,9,7};
    int size = sizeof(num) / sizeof(int) ;
    quickSort(num,0,7);
    for(int i = 0 ; i < size ; i++){
        std::cout << num[i] << " ";
    }
}