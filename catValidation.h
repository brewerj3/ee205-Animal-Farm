///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catValidation.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   09_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern int catNameExists( const int index, char nameToCheckAgainst[] ) ;

extern int checkForEmptyName( const int index ) ;

extern bool isValidIndex( const int index ) ;

extern bool isValidWeight( const Weight checkWeight ) ;

extern bool isValidName(char nameToCheck[] ) ;