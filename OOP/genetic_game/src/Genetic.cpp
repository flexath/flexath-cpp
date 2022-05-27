#include <iostream>
#include <iostream>
#include <stdio.h>
#include "Genetic.h"
#include "first_family.h"
#include "second_family.h"

using namespace std;

Genetic::Genetic()
{
    //father_side_genetic_diagram();
    //mother_side_genetic_diagram();
    //game_advertising();
    //choosing_game_options();
}

Genetic::~Genetic()
{
    printf("\n\nTHANK YOU !\n");
}

void Genetic::game_advertising(){
    cout << "Genetic Game is loading..." << endl;
    printf(".\n.\n.\n.\n");
    cout << "Game began !" << endl << endl;
    cout << "Choose what you want !" << endl;
    printf("No 1 - Father Side\n");
    printf("No 2 - Mother Side\n");
    printf("No 0 - Stop Game\n\n");
}

void Genetic::choosing_game_options(){
    no:
        cout << "Enter your genetic num : " ;
        scanf("%i" , &genetic_num);
        if(genetic_num == 1){
            printf("You chose Father Side\n");
            father_side_genetic_diagram();
        }
        else if(genetic_num == 2){
            printf("You chose Mother Side\n");
            mother_side_genetic_diagram();
        }
        else if(genetic_num == 0){
            goto stop;
        }
        else{
            printf("Choose again !!\n-------------------------\n");
            goto no;
        }
    stop:
        printf("Game is stopped !!!\n");
}

void Genetic::father_side_genetic_diagram(){
    printf("\n\n");
    printf("                                                   U Myaing         +     Daw Ohm Kyin \n");
    printf("                                                                    |             \n");
    printf("                            _____________  ________  ___________ ___|___  _________  __________  __________\n");
    printf("                           /             /         /           /    |    \\         \\          \\         \\  \n");
    printf("                          /             /         /           /     |     \\         \\          \\         \\ \n");
    printf("                         /             /         /           /      |      \\         \\          \\         \\ \n");
    printf("                        /             /         /           /       |       \\         \\          \\         \\ \n");
    printf("                   Khin Oo        Daw Too  Htay Htay    Thein Yi    |     Ye Tint   Myo Sint    Myo Tint    Wai Wai \n\n");
}

void Genetic::mother_side_genetic_diagram(){
    printf("\n\n");
    printf("                                                   U Kyaw Ohm       +     Daw Myint Shwe\n");
    printf("                                                                    |             \n");
    printf("                            _____________  ________  ___________ ___|___  _________  ________  _________   \n");
    printf("                           /             /         /           /    |    \\         \\          \\         \\  \n");
    printf("                          /             /         /           /     |     \\         \\          \\         \\ \n");
    printf("                         /             /         /           /      |      \\         \\          \\         \\ \n");
    printf("                        /             /         /           /       |       \\         \\          \\         \\ \n");
    printf("            Myint Myint Oo  Thein Than Oo  Thidar Oo    Sein Hla    |  Thu Zar Oo  Myat Min Thu  SiThu   Khin Myo Thu \n");
    printf("                                                                    |                                              \n");
    printf("                                                               U Aye Soe \n");
}
