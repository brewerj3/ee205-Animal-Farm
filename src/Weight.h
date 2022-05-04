///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iostream>

/// Class Weight holds a unit of weight and a typedef weight
class Weight{
public:
    enum UnitOfWeight{ POUND, SLUG, KILOGRAM }; ///< Pounds and Newtons are measures of force, Kilogram is a measure of Mass

    //Typedef of Weight
    typedef float typeWeight; ///< typedef weight is a float named typeWeight

    //static constants
    static const float KILOGRAMS_IN_A_SLUG;     ///< Number of kilograms in a slug
    static const float POUNDS_IN_A_KILOGRAM;    ///< Number of pounds in a kilogram
    static const float UNKNOWN_WEIGHT;          ///< The default weight if the weight is not known

    static const std::string POUND_LABEL;       ///< The name of a Pound
    static const std::string SLUG_LABEL;        ///< The name of a Slug
    static const std::string KILOGRAM_LABEL;    ///< The name of a kilogram

    //Conversion methods
    static float fromSlugToKilogram( float slug ) noexcept;         ///< Convert from slug to kilogram
    static float fromKilogramToSlug( float kilogram ) noexcept;     ///< Convert from kilogram to slug
    static float fromKilogramToPound( float kilogram ) noexcept;    ///< Convert from kiloGram to pound
    static float fromPoundToKilogram( float pound ) noexcept;       ///< Convert from pound to kilogram

    /// Convert between unit types given a two units and a weight
    static float convertWeight( float fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit ) noexcept;

    //getters
    typeWeight getWeight() const noexcept;                          ///< get the weight
    typeWeight getWeight( UnitOfWeight weightUnit ) const noexcept; ///< get the weight given a unit of Weight to convert to
    typeWeight getMaxWeight() const noexcept;                       ///< get the maximum weight allowable
    UnitOfWeight getWeightUnit() const noexcept;                    ///< get the unit the weight is stored in

    //setters
    void setWeight(typeWeight newWeight );                          ///< set the weight
    void setWeight( typeWeight newWeight, UnitOfWeight newUnit );   ///< set the weight given a unit to store it in
    void setMaxWeight( typeWeight newMaxWeight );                   ///< set the maximum weight allowable

    //bools
    bool isWeightKnown() const noexcept;                            ///< check if the weight is known or unknown
    bool hasMaxWeight() const noexcept;                             ///< check if the maximum weight is set
    bool isWeightValid( float weightToValidate ) const noexcept;    ///< check if the weight is greater than the max weight or is some other unallowable amount
    bool validate() const noexcept;                                 ///< check if the weight object is still valid

    //Print out from Class
    void dump() const noexcept;                                     ///< output the data in the weight object

    //Constructors
    explicit Weight() noexcept;                                                                     ///< Create a default weight object
    explicit Weight( typeWeight newWeight );                                                        ///< Create a weight object with a weight
    explicit Weight( UnitOfWeight newUnitOfWeight ) noexcept;                                       ///< Create a weight object with a unit
    explicit Weight( typeWeight newWeight, UnitOfWeight newUnitOfWeight );                          ///< Create a weight object with a weight and a unit
    explicit Weight( typeWeight newWeight, typeWeight newMaxWeight );                               ///< Create a weight object with a weight and a maximum weight
    explicit Weight( UnitOfWeight newUnitOfWeight, typeWeight newMaxWeight );                       ///< Create a weight object with a unit and a maximum weight
    explicit Weight( typeWeight newWeight, UnitOfWeight newUnitOfWeight, typeWeight newMaxWeight ); ///< Create a weight object with a weight, unit and maximum weight

    //Operators
    bool operator==(const Weight& rhs_Weight ) const ;
    bool operator<(const Weight& rhs_Weight ) const ;
    Weight& operator+=( typeWeight rhs_addToWeight );

private:
    UnitOfWeight unitOfWeight = POUND;      ///< holds the unit of weight, defaults to pound
    typeWeight weight {};                   ///< holds the weight
    typeWeight maximumWeight {};            ///< holds the maximum weight
    bool bWeightHasMax = false;             ///< tells if the weight has a maximum
    bool bWeightIsKnown = false;            ///< tells if the weight is known
};

std::ostream& operator<<( std::ostream& lhs_stream, Weight::UnitOfWeight rhs_UnitOfWeight ); ///< outputs the correct name of the unit of weight