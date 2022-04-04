///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   04_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "catDatabase.h"
#include "addCats.h"
#include "config.h"
#include "catValidation.h"

int addCat( char nameToAdd[], Gender isGender, Breed isBreed, bool isFixedNew, Weight weightNew ) {
    //validateDatabase @TODO
    CatClass newCat;
    newCat.setNameOfCat( nameToAdd );
    newCat.setWeight( weightNew );
    newCat.setIsFixed( isFixedNew );
    newCat.setGenderOfCat( isGender );
    newCat.setBreedOfCat( isBreed );
    newCat.validate();

}