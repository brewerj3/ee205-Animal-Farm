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
using namespace std;

#include "catDatabase.h"
#include "config.h"

int currentNumberOfCats=0;

CatClass::CatClass()
{
    setNameOfCat( nullptr );
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
    genderOfCat = genderToSet;
}

void CatClass::setBreedOfCat(Breed breedToSet) {
    breedOfCat = breedToSet;
}

void CatClass::setIsFixed(bool isFixedToSet) {
    isFixed = isFixedToSet;
}

void CatClass::setWeight(Weight weightToSet) {
    weight = weightToSet;
}

void CatClass::setNameOfCat( char newName[] ) {
    strcpy( name, newName);
}

CatClass **catDatabaseHeadPointer = nullptr;