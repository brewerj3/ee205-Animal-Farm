///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file catValidation.cpp
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "Cat.h"
#include "config.h"

using namespace std;



bool validateDatabase() {

#ifdef DEBUG
    cout << "Validating Database" << endl;
#endif

    for(CatClass* iterateOverList = catDatabaseHeadPointer; iterateOverList != nullptr; iterateOverList = iterateOverList->next) {

#ifdef DEBUG
        cout << "In while loop" << endl;
#endif

        if(!iterateOverList->validate()){
            cout << "This Cat is invalid" << endl;
            return false;
        }
    }

#ifdef DEBUG
    cout << "Database is Valid" << endl;
#endif

    return true;
}