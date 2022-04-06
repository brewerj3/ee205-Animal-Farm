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

#include <cstdio>
#include <cstdlib>
#include <cstring>


#include "catDatabase.h"
#include "addCats.h"
#include "config.h"
#include "catValidation.h"

bool addCat( char nameToAdd[], Gender isGender, Breed isBreed, bool isFixedNew, Weight weightNew ) {
    validateDatabase();

    CatClass* newCat = new CatClass();
    CatClass* last = catDatabaseHeadPointer;
    newCat->setNameOfCat( nameToAdd );
    newCat->setWeight( weightNew );
    newCat->setIsFixed( isFixedNew );
    newCat->setGenderOfCat( isGender );
    newCat->setBreedOfCat( isBreed );
    newCat->validate();
    newCat->next = nullptr;
    currentNumberOfCats++;

    if(catDatabaseHeadPointer == nullptr ) {
        catDatabaseHeadPointer = newCat;
        return true;
    }
    while( last->next != nullptr ){
        last = last->next;
    }
    last->next = newCat;
    return true;
}