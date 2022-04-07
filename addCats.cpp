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

#include <iostream>
using namespace std;


#include "catDatabase.h"
#include "addCats.h"
#include "config.h"
#include "catValidation.h"

bool addCat( char nameToAdd[], Gender isGender, Breed isBreed, bool isFixedNew, Weight weightNew ) {
    validateDatabase();
    cout << "validated" << endl;
    CatClass* newCat = new CatClass();
    cout << "added new CatClass()" << endl; //@TODO remove before final
    cout << "adding data to newCat" << endl;
    newCat->setNameOfCat( nameToAdd );
    newCat->setWeight( weightNew );
    newCat->setIsFixed( isFixedNew );
    newCat->setGenderOfCat( isGender );
    newCat->setBreedOfCat( isBreed );
    newCat->validate();
    newCat->next = nullptr;
    currentNumberOfCats++;

    CatClass* lastCat;

    for(CatClass* iterateOverList = catDatabaseHeadPointer; iterateOverList != nullptr; iterateOverList = iterateOverList->next){
        lastCat = iterateOverList;
    }
    newCat->next = lastCat;
    return true;
}