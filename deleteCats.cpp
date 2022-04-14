///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cassert>

#include "Cat.h"
#include "deleteCats.h"
#include "config.h"
#include "catValidation.h"

using namespace std;

void deleteAllCats(){
    cout << "Deleting all cats. " << endl;

#ifdef DEBUG
    cout << "Current Number of Cats: " << currentNumberOfCats << endl;
#endif

    while( catDatabaseHeadPointer != nullptr ) {

#ifdef DEBUG
        cout << PROGRAM_NAME << ": In while loop of deleteAllCats. currentNumberOfCats: " << currentNumberOfCats << endl;
#endif

        deleteCat(catDatabaseHeadPointer);
        if(currentNumberOfCats < 0){
            cout << PROGRAM_NAME << ": Missed a cat somewhere" << endl;
        }
    }
    cout << PROGRAM_NAME << ": All Cats Deleted" << endl;
}

void deleteCat(CatClass* catToDelete ){
    if(catToDelete == nullptr){
        cout << PROGRAM_NAME << ": Parameter passed to deleteCat called catToDelete is null" << endl;
        return;
    }
    assert( validateDatabase() );
    // Zero out Data

    if(catToDelete == catDatabaseHeadPointer) {

#ifdef DEBUG
        cout << PROGRAM_NAME << ": Special case this is the first Cat " << endl;
#endif

        catDatabaseHeadPointer = catDatabaseHeadPointer->next;

#ifdef DEBUG
        cout << PROGRAM_NAME << ": Deleting Cat Named: " << catToDelete->getName() << endl;
#endif

        catToDelete->zeroCat(); // zero out data
        delete catToDelete;
        currentNumberOfCats--;
        return;
    }

    for( CatClass* iterateOverList = catDatabaseHeadPointer; iterateOverList != nullptr; iterateOverList = iterateOverList->next ){
        // Find pointer to cats next to catToDelete in linked list
        if( iterateOverList->next == catToDelete ) {
            iterateOverList->next = catToDelete->next; //change next pointer to fix the gap in linked list

#ifdef DEBUG
            cout << PROGRAM_NAME << ": Deleting Cat Named: " << catToDelete->getName() << endl;
#endif

            catToDelete->zeroCat();
            delete catToDelete;
            currentNumberOfCats--;
            return;
        }
    }
}