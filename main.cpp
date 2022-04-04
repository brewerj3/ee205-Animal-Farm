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

#include <cstdio>
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

    //addCat( "Loki",   MALE,           PERSIAN,    true,  8.5,   BLACK,  WHITE,  101 );
    //addCat( "Milo",   MALE,           MANX,       true,  7.0,   BLACK,  RED,    102 );
    //addCat( "Bella",  FEMALE,         MAINE_COON, true,  18.2,  BLACK,  BLUE,   103 );
    //addCat( "Kali",   FEMALE,         SHORTHAIR,  false, 9.2,   BLACK,  GREEN,  104 );
    //addCat( "Trin",   FEMALE,         MANX,       true,  12.2,  BLACK,  PINK,   105 );
    //addCat( "Chili",  UNKNOWN_GENDER, SHORTHAIR,  false, 19.0,  WHITE,  BLACK,  106 );
    //addCat( "Tybalt", MALE,           SPHYNX,     true,  7.9,   WHITE,  WHITE,  107 );

    //printAllCats();

    //int kali = findCats( "Kali" );
    //updateCatName( kali, "Chili" ); //should fail
    //printCat( kali );
    //updateCatName( kali, "Capulet" );
    //updateCatWeight( kali, 9.9 );
    //fixCat( kali );
    //printCat( kali );

    //printAllCats();

    //int tybalt = findCats( "Tybalt" );
    //updateCatCollar1( tybalt, BLUE );
    //printCat(tybalt);
    //updateCatCollar2( tybalt, GREEN );
    //printCat( tybalt );
    //updateLicense(tybalt, 123456789);
    //printCat( tybalt );

    //deleteAllCats();
    //printAllCats();

    cout << "Done with " << PROGRAM_NAME << endl;
}