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
#include <iomanip>
using namespace std;

#include "catDatabase.h"
#include "config.h"
#include "reportCats.h"

CatClass* catDatabaseHeadPointer = nullptr;
int currentNumberOfCats = 0;

CatClass::CatClass()
{
    name[0]=0;
    genderOfCat = UNKNOWN_GENDER;
    breedOfCat = UNKNOWN_BREED;
    isFixed = false;
    weight = UNKNOWN_WEIGHT;
}

CatClass::CatClass( char* newName, Gender newGender, Breed newBreed, Weight newWeight)
{
    setNameOfCat( newName );
    setGenderOfCat( newGender );
    setBreedOfCat( newBreed );
    isFixed = false;
    setWeight( newWeight );
}

void CatClass::zeroCat() {
    memset( name, 0, MAX_NAME_LENGTH);
    genderOfCat = UNKNOWN_GENDER;
    breedOfCat = UNKNOWN_BREED;
    isFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
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
    isFixed = true;
}

void CatClass::setWeight(Weight weightToSet) {
    weight = weightToSet;
}

void CatClass::setNameOfCat( char* newName ) {
    validateName( newName );
    memset( name, 0, MAX_NAME_LENGTH);
    strcpy( name, newName);
}

bool CatClass::print() {
    validate();
#ifdef DEBUG
    cout << "Attempting to print a cat" << endl;
#endif
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGenderOfCat() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreedOfCat() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << getIsFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;

    return true;
}

bool CatClass::validateName(const char *newName) {
    if(newName == nullptr){
        cout<< " Name cannot be NULL" << endl;
    }
    if(strcmp(newName, "") == 0){
        cout << "Name cannot be "" " << endl;
    }
    if(strlen(newName) >= MAX_NAME_LENGTH){
        cout << "Name must be shorter than MAX_NAME_LENGTH" << endl;
    }
    return true;
}

bool CatClass::validateGender(const Gender newGender) {
    if(newGender == UNKNOWN_GENDER){
        return false;
    }
    return true;
}

bool CatClass::validateBreed(const Breed newBreed) {
    if(newBreed == UNKNOWN_BREED){
        return false;
    }
    return true;
}

bool CatClass::validateWeight(const Weight newWeight) {
    if(newWeight <= 0){
        return false;
    }
    return true;
}
