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
using namespace std;

#include "catDatabase.h"
#include "deleteCats.h"
#include "config.h"
#include "catValidation.h"

void deleteAllCats(){
    printf("Deleting all cats. \n");
    currentNumberOfCats = 0;

}

void deleteCat(CatClass* catToDelete ){
    if(catToDelete == nullptr){
        return;
    }
    assert(validateDatabase(catToDelete));

}