#include <iostream>
#include <stdio.h>

using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    int F1,F2,F;
    F1 = 0;
    F2 = 1;
    for(int i = 2 ; i <= n ; i++){
        F = F1+F2;
        F1 = F2;
        F2 = F;
    }
    return F;
}

int main(){
    int sizes;
    scanf("%i",&sizes);
    int result = fibonacci(sizes);
    cout << result << endl;
}
