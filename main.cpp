///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <cassert>
#include <cstring>

#include "Cat.h"

#include "config.h"

#define MAX_NAME1    "1234567890123456789012345678901234567890123456789"
#define ILLEGAL_NAME "12345678901234567890123456789012345678901234567890"

int main(){
    std::cout << "Starting " << PROGRAM_NAME << std::endl;

#ifdef DEBUG //for debugging unused features
    {
      // Verify that a cat's default values are set
      CatClass testCat = CatClass();
      assert(testCat.getName() != nullptr );
      assert(strcmp(testCat.getName(), "") == 0);
      assert(testCat.getGenderOfCat() == UNKNOWN_GENDER);
      assert(testCat.getBreedOfCat() == UNKNOWN_BREED);
      assert(testCat.getIsFixed() == false);
      assert(testCat.getWeight() == UNKNOWN_WEIGHT);
      assert(!testCat.getIsFixed());
      assert(!testCat.validate());  // The default cat is invalid

      // Test for NULL name
      try {
         testCat.setNameOfCat(nullptr);
         assert(false); // We should never get here
      } catch (exception const &e) {}

      // Test for empty name
      try {
         testCat.setNameOfCat("");
         assert(false); // We should never get here
      } catch (exception const &e) {}

      // Test valid names
      testCat.setNameOfCat("A");       // A 1 character name is valid
      testCat.setNameOfCat(MAX_NAME1); // A MAX_NAME1 name is valid

      // Test for name too large
      try {
         testCat.setNameOfCat(ILLEGAL_NAME);
         assert(false); // We should never get here
      } catch (exception const &e) {}

      testCat.setGenderOfCat(FEMALE);

      try {
         testCat.setGenderOfCat(MALE);
         assert(false); // We should never get here
      } catch (exception const &e) {}

      testCat.setBreedOfCat(MAINE_COON);

      try {
         testCat.setBreedOfCat(MANX);
         assert(false); // We should never get here
      } catch (exception const &e) {}

      testCat.setIsFixed();
      assert(testCat.getIsFixed());

      // Test for Weight <= 0
      try {
         testCat.setWeight(0);
         assert(false); // We should never get here
      } catch (exception const &e) {}

      testCat.setWeight(1.0 / 1024);
      assert(testCat.getWeight() == 1.0 / 1024);

      assert(testCat.validate());  // The cat should now be valid
      testCat.print() ;

      //assert(!isCatInDatabase(&testCat)) ; @TODO add isCatInDatabase when I know what it is supposed to do



   }
#endif

    Cat  firstCat( "Loki" );
    firstCat.dump();
    //addCat( new CatClass( "Milo",   MALE,           MANX,       1.1 ) );
    //addCat( new CatClass( "Bella",  FEMALE,         MAINE_COON, 1.2 ) );
    //addCat( new CatClass( "Kali",   FEMALE,         SHORTHAIR,  1.3 ) );
    //addCat( new CatClass( "Trin",   FEMALE,         MANX,       1.4 ) );
    //addCat( new CatClass( "Chili",  UNKNOWN_GENDER, SHORTHAIR,  1.5 ) );
    //addCat( new CatClass( "Tybalt", MALE,           SPHYNX,     7.9 ) );
    //printAllCats();


    //deleteAllCats();

    //printAllCats();

    std::cout << "Done with " << PROGRAM_NAME << std::endl;
}