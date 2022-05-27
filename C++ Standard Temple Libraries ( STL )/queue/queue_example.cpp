#include <iostream>
#include <queue>

void print(std::queue<int> que){
    while(!que.empty()){
        std::cout << que.front() << std::endl;
        que.pop();
    }
}

int main(){
    std::queue<int> que;
    que.push(100);
    que.push(200);
    que.push(300);
    que.push(400);
    que.push(500);
    que.pop();
    print(que);
}