///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   09_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "catDatabase.h"
#include "addCats.h"
#include "config.h"
#include "catValidation.h"

int addCat( char nameToAdd[], enum Gender isGender, enum Breed isBreed, bool isFixedNew, Weight weightNew, enum Color collarColor1, enum Color collarColor2, unsigned long long license ){
    if(currentNumberOfCats >= MAX_CATS){
        fprintf( stderr, "%s: CurrentNumberOfCats exceeds maximum allowed cats in database.\n", PROGRAM_NAME);
        return 0;
    }
    if( !isValidName(nameToAdd) ) {
        fprintf( stderr, "%s: the name is not valid \n", PROGRAM_NAME);
        return 0;
    }
    if( !isValidWeight( weightNew )) {
        return 0;
    }
    else {
        int index = 0;
        while(catNameExists( index, nameToAdd )) { //looking to see if name already exists
            index++;
        }
        index = 0; //reset index to look for empty location.
        while(( checkForEmptyName( index ) ) && (MAX_CATS > index)){ //searching for first empty spot
            index++;
        }
        strcpy(catsStruct[index].name, nameToAdd);
        catsStruct[index].isFixed = isFixedNew;
        catsStruct[index].gender = isGender;
        catsStruct[index].breed = isBreed;
        catsStruct[index].weight = weightNew;
        catsStruct[index].color1 = collarColor1;
        catsStruct[index].color2 = collarColor2;
        catsStruct[index].license = license;
        currentNumberOfCats++;
        return index;
    }
}