#include <iostream>

enum joints{
    fixed,revolute,prismatic
};

int main(){
    joints joint;
    joint = revolute;

    if(joint == fixed){
        std::cout << "It is fixed joint" << std::endl;
    }
    else if(joint == revolute){
        std::cout << "It is revolute joint" << std::endl;
    }
    else if(joint == prismatic){
        std::cout << "It is prismatic joint" << std::endl;
    }
    else{
        std::cout << "It is other joint" << std::endl;
    }
    
}