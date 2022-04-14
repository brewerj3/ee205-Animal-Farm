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

#include "catDatabase.h"
#include "config.h"

using namespace std;

bool CatClass::validate() {
    if( name == nullptr ) {
        cout << "Invalid Cat name" << endl;
        return false;
    }
    if( name == "" ) {
        cout << "Invalid Cat name" << endl;
        return false;
    }
    if(sizeof(name) > MAX_NAME_LENGTH){
        cout << "Invalid Cat name" << endl;
        return false;
    }
    if( ( genderOfCat < 0 ) || ( genderOfCat > 2 ) ) {
        cout << "Invalid Cat Gender" << endl;
        return false;
    }
    if( ( breedOfCat < 0 ) || ( breedOfCat > 5 ) ) {
        cout << "Invalid Cat Breed" << endl;
        return false;
    }
    if( weight <= 0 ) {
        cout << "Invalid Cat weight" << endl;
        return false;
    }
    return true;
}

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