///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   09_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "catDatabase.h"
#include "config.h"

int currentNumberOfCats=0;

struct Cat catsStruct[MAX_CATS];

CatClass::CatClass()
{
    //name =''; make this work later.
    genderOfCat = UNKNOWN_GENDER;
    breedOfCat = UNKNOWN_BREED;
    isFixed = false;
    weight = UNKNOWN_WEIGHT;
}

void CatClass::addCat(const char newName[], Gender newGender, Breed newBreed, Weight newWeight)
{
    CatClass::name = newName;
    CatClass::genderOfCat = newGender;
    CatClass::breedOfCat = newBreed;
    CatClass::isFixed = false;
    CatClass::weight = newWeight;
}

char CatClass::getName() const {
    return name;
}

Gender CatClass::getGenderOfCat() const {
    return genderOfCat;
}

Breed CatClass::getBreedOfCat() const {
    return breedOfCat;
}

bool CatClass::getFixedState() const {
    return isFixed;
}

Weight CatClass::getWeight() const {
    return weight;
}

void CatClass::setName(char name) {
    CatClass::name = name;
}

void CatClass::setGenderOfCat(Gender genderToSet) {
    CatClass::genderOfCat = genderToSet;
}

void CatClass::setBreedOfCat(Breed breedToSet) {
    CatClass::breedOfCat = breedToSet;
}

void CatClass::setIsFixed(bool fixedStateToSet) {
    CatClass::isFixed = fixedStateToSet;
}

void CatClass::setWeight(Weight weightToSet) {
    CatClass::weight = weightToSet;
}
