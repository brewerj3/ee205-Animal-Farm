///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   04_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#define MAX_NAME_LENGTH ( 50 )
#define MAX_CATS ( 1024 )
#define UNKNOWN_WEIGHT ( -1 )

enum Gender{UNKNOWN_GENDER, MALE, FEMALE};

enum Breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

enum Color{BLACK, WHITE, RED, BLUE, GREEN, PINK};

typedef float Weight;

extern int currentNumberOfCats;

class CatClass {
private:
    char name[MAX_NAME_LENGTH];
    Gender genderOfCat;
    Breed breedOfCat;
    bool isFixed;
    Weight weight;
    CatClass* catDatabaseHeadPointer;

public:
    CatClass* next = nullptr;
    CatClass();
    CatClass( char newName[], Gender newGender, Breed newBreed, Weight newWeight);

    //getters
    const char *getName() const;

    Gender getGenderOfCat() const;

    Breed getBreedOfCat() const;

    bool getIsFixed() const;

    Weight getWeight() const;

    //setters
    void setNameOfCat( char newName[] );

    void setIsFixed(bool isFixedToSet);

    void setWeight(Weight weightToSet);

    // Print Method
    void print();

    // Validation Method
    bool validate();

//protected: @TODO fix these and make them protected later
    //protected setters
    void setGenderOfCat(Gender genderToSet);

    void setBreedOfCat(Breed breedToSet);
};
