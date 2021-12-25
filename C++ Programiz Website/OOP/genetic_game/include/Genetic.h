#ifndef GENETIC_H
#define GENETIC_H
#include <stdio.h>

class Genetic
{
    public:
        int genetic_num;
        void choosing_game_options();
        void game_advertising();
        void father_side_genetic_diagram();
        void mother_side_genetic_diagram();
        virtual void display_names(){
            printf("Display Successful");
        };
        Genetic();
        ~Genetic();

    protected:

    private:
};

#endif // GENETIC_H
