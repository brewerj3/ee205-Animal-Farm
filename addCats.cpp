///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "catDatabase.h"
#include "addCats.h"
#include "config.h"
#include "catValidation.h"

using namespace std;

bool addCat( CatClass* newCat ) {
    if(newCat == nullptr){
        return false;
    }
    newCat->validate();
    validateDatabase();

#ifdef DEBUG
    cout << "added new CatClass()" << endl;
#endif

    newCat->next = catDatabaseHeadPointer;
    catDatabaseHeadPointer = newCat;
    currentNumberOfCats++;

    return true;
}