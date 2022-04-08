///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   04_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern char* genderName( int gender );

extern char* breedName( int gender );

extern void printAllCats();

extern int findCats( char nameToFind[] );

extern CatClass* findCatByName(const char* nameToFind );