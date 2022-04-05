///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   04_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

#include "catDatabase.h"
#include "reportCats.h"
#include "config.h"
#include "catValidation.h"

//char* colorCollar( const int color ){
//    switch(color){
//        case 0 :
//            return "Black";
//        case 1 :
//            return "White";
//        case 2 :
//            return "Red";
//        case 3 :
//            return "Blue";
//        case 4 :
//            return "Green";
//        case 5 :
//            return "Pink";
//    }
//    return 0;
//}

char* genderName( const int gender ){
    switch(gender){
        case 0 :
            return "Unknown gender";
        case 1 :
            return "Male";
        case 2 :
            return "Female";
    }
    return 0;
}

char* breedName( const int breed ){
    switch(breed) {
        case 0 :
            return "Unknown Breed";
        case 1 :
            return "Maine Coon";
        case 2 :
            return "Manx";
        case 3 :
            return "Shorthair";
        case 4 :
            return "Persian";
        case 5 :
            return "Sphynx";
    }
    return 0;
}

bool CatClass::print() {
    validate();

    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGenderOfCat() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreedOfCat() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << getIsFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;

    return true;
}
void printAllCats( CatClass* n ){
    while( n != NULL ) {
        n->print();
        n = n->next;
    }
}