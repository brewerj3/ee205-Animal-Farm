///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>
#include <iomanip>

#include "Cat.h"
#include "config.h"
#include "reportCats.h"

using namespace std;

CatClass* catDatabaseHeadPointer = nullptr;
int currentNumberOfCats = 0;

CatClass::CatClass()
{
    name.clear();
    genderOfCat = UNKNOWN_GENDER;
    breedOfCat = UNKNOWN_BREED;
    isFixed = false;
    weight = UNKNOWN_WEIGHT;
}

CatClass::CatClass( std::string newName, Gender newGender, Breed newBreed, Weight newWeight)
{
    setNameOfCat( newName );
    setGenderOfCat( newGender );
    setBreedOfCat( newBreed );
    isFixed = false;
    setWeight( newWeight );
}

void CatClass::zeroCat() {
    name.clear();
    genderOfCat = UNKNOWN_GENDER;
    breedOfCat = UNKNOWN_BREED;
    isFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}

std::string CatClass::getName() const {
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

void CatClass::setIsFixed() {
    isFixed = true;
}

void CatClass::setWeight(Weight weightToSet) {
    weight = weightToSet;
}

void CatClass::setNameOfCat( std::string newName ) {
    validateName( newName );
    name.clear();
    name = newName;
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

bool CatClass::validate() {

    if( name.empty() ) {
        cout << "Invalid Cat name" << endl;
        return false;
    }
    if( name.length() > MAX_NAME_LENGTH){
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