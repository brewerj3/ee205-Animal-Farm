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

bool addCat( CatClass* newCat ) {
    if(newCat == nullptr){
        return false;
    }
    newCat->validate();
    validateDatabase();

#ifdef DEBUG
    cout << "added new CatClass()" << endl; //@TODO remove before final
#endif

    newCat->next = catDatabaseHeadPointer;
    catDatabaseHeadPointer = newCat;
    currentNumberOfCats++;

    return true;
}