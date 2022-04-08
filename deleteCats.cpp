///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   04_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cassert>
using namespace std;

#include "catDatabase.h"
#include "deleteCats.h"
#include "config.h"
#include "catValidation.h"

void deleteAllCats(){
    cout << "Deleting all cats. Current Number of Cats: " << currentNumberOfCats << endl;
    for(CatClass* iterateOverList = catDatabaseHeadPointer; iterateOverList != nullptr; iterateOverList = iterateOverList->next) {

        cout << PROGRAM_NAME << ": In for loop of deleteAllCats. currentNumberOfCats: " << currentNumberOfCats << endl;

        if(currentNumberOfCats < 0){
            cout << PROGRAM_NAME << ": Missed a cat somewhere" << endl;
        }
    }
}

void deleteCat(CatClass* catToDelete ){
    if(catToDelete == nullptr){
        cout << PROGRAM_NAME << ": Parameter passed to deleteCat called catToDelete is null" << endl;
        return;
    }
    assert( validateDatabase() );
    // Zero out Data
    cout << PROGRAM_NAME << ": Deleting Cat Named: " << catToDelete->getName() << endl;
    if(catToDelete == catDatabaseHeadPointer) {
        catDatabaseHeadPointer = catDatabaseHeadPointer->next;
        catToDelete->zeroCat();
        delete catToDelete;
        currentNumberOfCats--;
        return;
    }

    for( CatClass* iterateOverList = catDatabaseHeadPointer; iterateOverList != nullptr; iterateOverList = iterateOverList->next ){
        // Find pointer to cats next to catToDelete in linked list
        if( iterateOverList->next == catToDelete ) {
            iterateOverList->next = catToDelete->next; //change next pointer to fix the gap in linked list
            delete catToDelete;
            currentNumberOfCats--;
            return;
        }
    }
    catToDelete->zeroCat();
    currentNumberOfCats--;
}