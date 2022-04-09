///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   04_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <cstring>
#include <cstdlib>
#include <cstdio>

#include "catDatabase.h"
#include "updateCats.h"
#include "config.h"
#include "catValidation.h"


void updateCatName( const int index, char newName[] ) {
    if( !isValidName(newName) ) { //Check if new name is a valid name
        exit(EXIT_FAILURE);
    }
    if( !isValidIndex(index) ){ //check if index is valid
        exit(EXIT_FAILURE);
    }
    int indexSearch = 0;
    while( indexSearch != MAX_CATS ) { // Search for existing cat with same name as new name
        if(catNameExists(indexSearch, newName)) {
            fprintf(stderr, "%s: cannot rename %s to %s as the cat at index: %d is already named %s \n", PROGRAM_NAME, catsStruct[index].name, newName, indexSearch, catsStruct[indexSearch].name);
            return;
        }
        indexSearch++;
    }
    strcpy(catsStruct[index].name, newName);
}

void fixCat( const int index ) {
    if( !isValidIndex( index )){ //checks if index is a valid index
        return;
    }
    if(checkForEmptyName( index )) {//checks if the index is empty
        catsStruct[index].isFixed = true;
    }
}

void updateCatWeight( const int index, Weight newWeight ) {
    if(!isValidIndex( index ) ) {
        return;
    }
    if( !isValidWeight(newWeight) ) {
        return;
    }
    if(checkForEmptyName( index )) {
        catsStruct[index].weight = newWeight;
    }
}

void updateCatCollar1( const int index, enum Color collarColor1 ){
    if(checkForEmptyName( index )) {
        catsStruct[index].color1 = collarColor1;
    }
}

void updateCatCollar2( const int index, enum Color collarColor2 ){
    if(checkForEmptyName( index )) {
        catsStruct[index].color2 = collarColor2;
    }
}

void updateLicense( const int index, unsigned long long license ){
    if(checkForEmptyName( index )) {
        catsStruct[index].license = license;
    }
}