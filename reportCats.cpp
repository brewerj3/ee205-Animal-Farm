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

#include <iostream>
#include <cstring>
using namespace std;

#include "catDatabase.h"
#include "reportCats.h"
#include "config.h"


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


void printAllCats(){
#ifdef DEBUG
    cout << PROGRAM_NAME << ": Attempting to print all cats" << endl;
#endif
    CatClass* iterateOverList = catDatabaseHeadPointer;
    while( iterateOverList != nullptr ) {
#ifdef DEBUG
        cout << PROGRAM_NAME << ": In while loop printing all cats. currentNumberOfCats: " << currentNumberOfCats << endl;
#endif
        iterateOverList->print();
        iterateOverList = iterateOverList->next;
    }
}

CatClass* findCatByName( const char* nameToFind ) {
    if(!CatClass().validateName(nameToFind)) {
        cout << PROGRAM_NAME << ": Invalid Cat name passed to findCatByName" << endl;
        return nullptr;
    }

    for (CatClass *iterateOverList = catDatabaseHeadPointer; iterateOverList != nullptr; iterateOverList = iterateOverList->next) {
        if( strcmp( nameToFind, iterateOverList->getName() ) == 0 ) {
            return iterateOverList;
        }
    }
    return nullptr;
}


