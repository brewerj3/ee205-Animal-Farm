///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catValidation.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   04_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#include "catDatabase.h"
#include "config.h"


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

bool validateDatabase( CatClass** head ) {
    cout << "Validating Database" << endl;
    CatClass *last = *head;
    cout << "created last pointer to point to last object in linked list" << endl;
    while( last->next != nullptr ) {
        if(!last->validate()){
            cout << "This Cat is invalid" << endl;
            return false;
        }
        last = last->next;
    }
    return true;
}