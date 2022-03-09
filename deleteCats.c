///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   09_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

#include "catDatabase.h"
#include "deleteCats.h"
#include "config.h"

void deleteAllCats(){
    printf("Deleting all cats. \n");
    currentNumberOfCats = 0;
    memset(catsStruct, 0, sizeof(catsStruct));
}

