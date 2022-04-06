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

#include <cstring>


#include "catDatabase.h"
#include "config.h"

bool validateDatabase( CatClass* n ) {

    while( n != nullptr ) {
        if(n->validate() == false ){
            return false;
        }
        n = n->next;
    }
    return true;
}