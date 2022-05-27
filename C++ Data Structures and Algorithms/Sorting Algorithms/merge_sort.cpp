#include <iostream>

void merge(int num[] , int start , int end , int mid){
    int i = start ;
    int j = mid+1 ;
    int k = start ;
    int temp[end] ;
    while(i <= mid && j <= end){
        if(num[i] <= num[j]){
            temp[k] = num[i];
            i++;
            k++;
        }
        else{
            temp[k] = num[j];
            j++;
            k++;
        }
    }
    while(i <= mid){
        temp[k] = num[i];
        i++;
        k++;
    }
    while(j <= end){
        temp[k] = num[j];
        j++;
        k++;
    }
    for(int l = start ; l <= end ; l++){
        num[l] = temp[l];
    }
}

void mergeSort(int num[] , int start , int end ){
    //std::cout << "Worst Case : O(nlogn)" << std::endl;
    if(start < end){
        int mid = start + (end-start)/2;
        mergeSort(num,start,mid);
        mergeSort(num,mid+1,end);
        merge(num,start,end,mid);
    }
}

int main(){
    int num[] = {3,5,2,8,1,4,9,7};
    int size = sizeof(num) / sizeof(int) ;
    mergeSort(num,0,7);
    for(int i = 0 ; i < size ; i++){
        std::cout << num[i] << " ";
    }
}