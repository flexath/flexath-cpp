#ifndef SECOND_FAMILY_H
#define SECOND_FAMILY_H

#include <Genetic.h>
#include <string>

using namespace std;


class second_family : public Genetic
{
    public:
        const string family_names[12] = {"U Kyaw Ohm","Daw Myint Shwe","Myint Myint Oo","Thein Than Oo","Thidar Oo","Sein Hla","Aye Soe",
                                "Thuzar Oo","Myat Min Thu","Sithu","Khin Myo Thu"};
        //string name;
        second_family();
        ~second_family();
        void display_names();
        //string who_is_who();
        //void game_program();
    private:
};

#endif // SECOND_FAMILY_H
