#include <iostream>
#include <vector>

int main()
{
    std::vector<int> num;

    printf("----------Pushing Elements at back----------\n");
    num.push_back(1);
    num.push_back(3);
    num.push_back(5);
    num.push_back(7);
    num.push_back(9);
    num.push_back(11);
    int *ptr_num = num.data();
    for(int i = 0 ; i < num.size() ; i++){
        std::cout << ptr_num[i] << " " ;
    }

    printf("\n");

    printf("----------Popping Elements at back----------\n");
    num.pop_back();
    for(int i = 0 ; i < num.size() ; i++){
        std::cout << ptr_num[i] << " " ;
    }

    printf("\n");

    printf("----------Inserting Elements at nth position----------\n");
    num.insert(num.begin(),100);
    for(int i = 0 ; i < num.size() ; i++){
        std::cout << ptr_num[i] << " " ;
    }

    printf("\n");

    printf("----------After erasing some elements with range----------\n");
    //num.erase(num.begin(),num.end());                 // This line deletes from beginning to end
    num.erase(num.begin());                             // This line deletes at beginning
    for(int i = 0 ; i < num.size() ; i++){
        std::cout << ptr_num[i] << " " ;
    }

    printf("\n");

    printf("----------After clearing all elements----------\n");
    num.clear();
    for(int i = 0 ; i < num.size() ; i++){
        std::cout << ptr_num[i] << " " ;
    }

    printf("\n");

    printf("----------After emplacing----------\n");
    num.emplace(num.begin(),200);
    for(int i = 0 ; i < num.size() ; i++){
        std::cout << ptr_num[i] << " " ;
    }

    printf("\n");

    printf("----------After emplacing at end----------\n");
    num.emplace_back(300);
    for(int i = 0 ; i < num.size() ; i++){
        std::cout << ptr_num[i] << " " ;
    }

    printf("\n");

    printf("----------After swaping----------\n");
    std::vector<int> num2 = {77,99,88};
    num.swap(num2);
    printf("This is for 'num' vector - ");
    for(int i = 0 ; i < num.size() ; i++){
        std::cout << num[i] << " " ;
    }

    printf("\nThis is for 'num2' vector - ");
    for(int i = 0 ; i < num2.size() ; i++){
        std::cout << num2[i] << " " ;
    }
}
