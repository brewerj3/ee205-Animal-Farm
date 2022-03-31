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

void CatClass::addCat(const char *newName, CatClass::Gender newGender, CatClass::Breed newBreed, Weight newWeight)
{
    CatClass::name = newName;
    genderOfCat = newGender;
    breedOfCat = newBreed;
    isFixed = false;
    weight = newWeight;
}

char CatClass::getName() const {
    return name;
}

int CatClass::getGenderOfCat() const {
    return genderOfCat;
}

int CatClass::getBreedOfCat() const {
    return breedOfCat;
}

bool CatClass::getFixed() const {
    return isFixed;
}

Weight CatClass::getWeight() const {
    return weight;
}

void CatClass::setName(char newName) {
    CatClass::name = newName;
}

void CatClass::setGenderOfCat(int newGender) {
    CatClass::genderOfCat = newGender;
}

void CatClass::setBreedOfCat(int newBreed) {
    CatClass::breedOfCat = newBreed;
}

void CatClass::setIsFixed(bool fixed) {
    CatClass::isFixed = fixed;
}

void CatClass::setWeight(Weight newWeight) {
    CatClass::weight = newWeight;
}
