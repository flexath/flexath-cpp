#include <iostream>

using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);

}

int main()
{
    int sizes;
    cin >> sizes;
    int result = factorial(sizes);
    cout << result << endl;
}
