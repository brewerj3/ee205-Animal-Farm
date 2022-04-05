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
    if( name == nullptr ) {
        cout << "Invalid Cat name" << endl;
        return false;
    }
    if( name == "" ) {
        cout << "Invalid Cat name" << endl;
        return false;
    }
    if(sizeof(name) > MAX_NAME_LENGTH){
        cout << "Invalid Cat name" << endl;
        return false;
    }
    if( ( genderOfCat < 0 ) || ( genderOfCat > 2 ) ) {
        cout << "Invalid Cat Gender" << endl;
        return false;
    }
    if( ( breedOfCat < 0 ) || ( breedOfCat > 5 ) ) {
        cout << "Invalid Cat Breed" << endl;
        return false;
    }
    if( weight <= 0 ) {
        cout << "Invalid Cat weight" << endl;
        return false;
    }
    return true;
}
