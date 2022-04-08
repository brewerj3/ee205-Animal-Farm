///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   04_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

#include "catDatabase.h"
#include "addCats.h"
#include "deleteCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "config.h"

int main(){
    cout << "Starting " << PROGRAM_NAME << endl;

    addCat( new CatClass( "Loki",   MALE,           PERSIAN,    1.0) );
    addCat( new CatClass( "Milo",   MALE,           MANX,       1.1) );
    addCat( new CatClass( "Bella",  FEMALE,         MAINE_COON, 1.2 ) );
    addCat( new CatClass( "Kali",   FEMALE,         SHORTHAIR,  9.2) );
    addCat( new CatClass( "Trin",   FEMALE,         MANX,       12.2) );
    addCat( new CatClass( "Chili",  UNKNOWN_GENDER, SHORTHAIR,  19.0 ));
    addCat( new CatClass( "Tybalt", MALE,           SPHYNX,     7.9));
    printAllCats();

    deleteAllCats();

    printAllCats();

    cout << "Done with " << PROGRAM_NAME << endl;
}