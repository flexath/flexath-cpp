#include "second_family.h"
#include <iostream>
#include <iostream>
#include <stdio.h>
#include "Genetic.h"
#include "first_family.h"
#include <string>

second_family::second_family()
{

}

second_family::~second_family()
{

}

void second_family::display_names(){
    printf("Choose the relationship number between two people");
    printf("1 - U Kyaw Ohm\n");
    printf("2 - Daw Myint Shwe\n");
    printf("3 - Myint Myint Oo\n");
    printf("4 - Thein Thein Oo\n");
    printf("5 - Thidar Oo\n");
    printf("6 - Sein Hla\n");
    printf("7 - Aye Soe\n");
    printf("8 - Thuzar Oo\n");
    printf("9 - Myat Min Thu\n");
    printf("10 - Sithu\n");
    printf("11 - Khin Myo Thu\n");
}

/*string second_family::who_is_who(){
    int no;
    scanf("%i",no);
    switch(no){
    case 1:
        return family_names[0];
    case 2:
        return family_names[1];
    case 3:
        return family_names[2];
    case 4:
        return family_names[3];
    case 5:
        return family_names[4];
    case 6:
        return family_names[5];
    case 7:
        return family_names[6];
    case 8:
        return family_names[7];
    case 9:
        return family_names[8];
    case 10:
        return family_names[9];
    case 11:
        return family_names[10];
    }
}

void second_family::game_program(){
    name = who_is_who();
    printf("The relationship between %s and %s is ",name,name);
}*/
