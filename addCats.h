///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   09_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern int addCat( char nameToAdd[],
                   enum Gender isGender,
                   enum Breed isBreed,
                   bool isFixedNew,
                   Weight weightNew,
                   enum Color collarColor1,
                   enum Color collarColor2,
                   unsigned long long license ) ;