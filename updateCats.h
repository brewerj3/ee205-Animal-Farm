///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   09_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern void updateCatName( int index, char newName[] );

extern void fixCat( int index );

extern void updateCatWeight( int index, Weight newWeight );

extern void updateCatCollar1( int index, enum Color collarColor1 );

extern void updateCatCollar2( int index, enum Color collarColor2 );

extern void updateLicense( int index, unsigned long long license );