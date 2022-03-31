///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   09_Mar_2022
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

struct Cat {
    char name[MAX_NAME_LENGTH];
    bool isFixed;
    Weight weight;
    int gender;
    int breed;
    int color1;
    int color2;
    unsigned long long license;
};

class CatClass {
private:
    char name{MAX_NAME_LENGTH};
    enum Gender{};
    int genderOfCat;
    enum Breed{};
    int breedOfCat;
    bool isFixed;
    Weight weight;

public:
    CatClass* next{};
    CatClass();
    void addCat(const char newName[], Gender newGender, Breed newBreed, Weight newWeight);
    //getters
    char getName() const;

    int getGenderOfCat() const;

    int getBreedOfCat() const;

    bool isFixed1() const;

    Weight getWeight() const;

    //setters

    void setName(char name);

    void setGenderOfCat(int genderOfCat);

    void setBreedOfCat(int breedOfCat);

    void setIsFixed(bool isFixed);

    void setWeight(Weight weight);
};

extern struct Cat catsStruct[MAX_CATS];