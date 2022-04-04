///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   04_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>

#include "catDatabase.h"
#include "config.h"

int currentNumberOfCats=0;

struct Cat catsStruct[MAX_CATS];

CatClass::CatClass()
{
    setNameOfCat( nullptr );
    name = nullptr;
    genderOfCat = UNKNOWN_GENDER;
    breedOfCat = UNKNOWN_BREED;
    isFixed = false;
    weight = UNKNOWN_WEIGHT;
}

CatClass::CatClass( char newName[], Gender newGender, Breed newBreed, Weight newWeight)
{
    setNameOfCat( nullptr );
    genderOfCat = UNKNOWN_GENDER;
    breedOfCat = UNKNOWN_BREED;
    isFixed = false;
    weight = UNKNOWN_WEIGHT;
}

const char *CatClass::getName() const {
    return name;
}

Gender CatClass::getGenderOfCat() const {
    return genderOfCat;
}

Breed CatClass::getBreedOfCat() const {
    return breedOfCat;
}

bool CatClass::getIsFixed() const {
    return isFixed;
}

Weight CatClass::getWeight() const {
    return weight;
}

void CatClass::setGenderOfCat(Gender genderToSet) {
    CatClass::genderOfCat = genderToSet;
}

void CatClass::setBreedOfCat(Breed breedToSet) {
    CatClass::breedOfCat = breedToSet;
}

void CatClass::setIsFixed(bool isFixedToSet) {
    CatClass::isFixed = isFixedToSet;
}

void CatClass::setWeight(Weight weightToSet) {
    CatClass::weight = weightToSet;
}

void CatClass::setNameOfCat( char newName[] ) {
    strcpy( CatClass::name, newName);
}

void CatClass::print() {

}

bool CatClass::validate() {
    if( CatClass::name == nullptr ) {
        return false;
    }
    if( CatClass::name == "" ) {
        return false;
    }
    if(sizeof(CatClass::name) > MAX_NAME_LENGTH){
        return false;
    }
    if( ( CatClass::genderOfCat < 0 ) || ( CatClass::genderOfCat > 2 ) ) {
        return false;
    }
    if( ( CatClass::breedOfCat < 0 ) || ( CatClass::breedOfCat > 5 ) ) {
        return false;
    }
    if( CatClass::weight <= 0 ) {
        return false;
    }
    return true;
}
