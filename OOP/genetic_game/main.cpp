#include <iostream>
#include <iostream>
#include <stdio.h>
#include "Genetic.h"
#include "first_family.h"
#include "second_family.h"
#include <string>

using namespace std;

int main()
{
    first_family first;
    second_family second;

    Genetic *father;
    Genetic *mother;

    father = &first;
    mother = &second;

    father->display_names();
    printf("\n\n\n");
    mother->display_names();
}
