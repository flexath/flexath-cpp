#include <iostream>
#include <stdio.h>

using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int sizes;
    scanf("%i",&sizes);
    int result = fibonacci(sizes);
    cout << result << endl;
}