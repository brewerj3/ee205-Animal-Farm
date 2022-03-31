///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   09_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"
#include "config.h"

int currentNumberOfCats=0;

struct Cat catsStruct[MAX_CATS];

CatClass::CatClass()
{
    genderOfCat = UNKNOWN_GENDER;
    breedOfCat = UNKNOWN_BREED;
    isFixed = false;
    weight = UNKNOWN_WEIGHT;
}
void CatClass::addCat(const char* newName[], const Gender newGender, const Breed newBreed, const Weight newWeight)
{
    name = newName;
    genderOfCat = newGender;
    breedOfCat = newBreed;
    weight = newWeight;
}