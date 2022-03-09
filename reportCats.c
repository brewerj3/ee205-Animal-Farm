///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   09_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#include "catDatabase.h"
#include "reportCats.h"
#include "config.h"
#include "catValidation.h"

char* colorCollar( const int color ){
    switch(color){
        case 0 :
            return "Black";
        case 1 :
            return "White";
        case 2 :
            return "Red";
        case 3 :
            return "Blue";
        case 4 :
            return "Green";
        case 5 :
            return "Pink";
    }
    return 0;
}

char* genderOfCat( const int gender ){
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

char* breedOfCat( const int breed ){
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

void printCat( const int index ) {
    if( ( catsStruct[index].name[0] == '\0'  ) || (index < 0) || (index > MAX_CATS) ){
        fprintf(stderr, "%s: Bad cat [%d] \n", PROGRAM_NAME, index);
        return;
    }
    else {

        printf("cat index = [%u] name = [%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%4.4f] collarColor1=[%s] collarColor2=[%s] license=[%llu] \n", index, catsStruct[index].name, genderOfCat(catsStruct[index].gender), breedOfCat(catsStruct[index].breed), catsStruct[index].isFixed, catsStruct[index].weight, colorCollar(catsStruct[index].color1), colorCollar(catsStruct[index].color2), catsStruct[index].license);
    }
    return;
}

void printAllCats(void){
    int index = 0;
    if(currentNumberOfCats == 0){
        fprintf( stderr, "%s: There are no cats in this database \n", PROGRAM_NAME);
    }
    while( ( checkForEmptyName( index )  )  && (index < MAX_CATS) ){
        printf("cat index = [%u] name = [%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%4.4f] collarColor1=[%s] collarColor2=[%s] license=[%llu] \n", index, catsStruct[index].name, genderOfCat(catsStruct[index].gender), breedOfCat(catsStruct[index].breed), catsStruct[index].isFixed, catsStruct[index].weight, colorCollar(catsStruct[index].color1), colorCollar(catsStruct[index].color2), catsStruct[index].license);
        index++;
    }
    return;
}

int findCats( char nameToFind[] ){
    int index = 0;
    printf("Looking for %s's Index \n", nameToFind);
    while(index != MAX_CATS){
        if(catNameExists(index, nameToFind)){
            printf("%s is located at index %d \n", nameToFind, index);
            return index;
        }
        index++;
    }
    if(index == MAX_CATS){
        fprintf( stderr, "%s: Reached the max number of cats and did not find cat.", PROGRAM_NAME);
        exit(EXIT_FAILURE);
    }
    else {
        return index;
    }
}