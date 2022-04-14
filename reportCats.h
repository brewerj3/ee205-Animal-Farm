///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern char* genderName( int gender );

extern char* breedName( int gender );

extern void printAllCats();

extern int findCats( char nameToFind[] );

extern CatClass* findCatByName(const char* nameToFind );