///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#define MAX_NAME_LENGTH ( 50 )
#define MAX_CATS ( 1024 )
#define UNKNOWN_WEIGHT ( -1 )
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)



enum Breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

enum Color{BLACK, WHITE, RED, BLUE, GREEN, PINK};

typedef float Weight;

extern int currentNumberOfCats;

class CatClass {
private:
    std::string name;
    Gender genderOfCat;
    Breed breedOfCat;
    bool isFixed;
    Weight weight;


public:
    CatClass *next = nullptr;

    CatClass();
    CatClass( std::string newName, Gender newGender, Breed newBreed, Weight newWeight);

    //Zero out data function
    void zeroCat();

    //getters
    std::string getName() const;

    Gender getGenderOfCat() const;

    Breed getBreedOfCat() const;

    bool getIsFixed() const;

    Weight getWeight() const;

    //setters
    void setNameOfCat( std::string newName );

    void setIsFixed();

    void setWeight(Weight weightToSet);

    // Print Method
    bool print();

    // Validation Method
    bool validate();

    static bool validateName(const char *newName);

    static bool validateGender(const Gender newGender);

    static bool validateBreed(const Breed newBreed);

    static bool validateWeight(const Weight newWeight);

//protected: @TODO fix these and make them protected later
    //protected setters
    void setGenderOfCat(Gender genderToSet);

    void setBreedOfCat(Breed breedToSet);
};

extern CatClass* catDatabaseHeadPointer;