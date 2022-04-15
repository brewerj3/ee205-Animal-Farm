///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iostream>

#include "config.h"

class Node{
protected:
    Node* next = nullptr;

    static bool compareByAddress( const Node* node1, const Node* node2 ) {
        if( node1 < node2 ) {
            return false;
        }
        return true;
    }

public:
    virtual void dump() const {
        std::string className = "Node";
        FORMAT( className, "This" ) << this << std::endl;
        FORMAT( className, "Next pointer" ) << next << std::endl;
    }
    virtual bool validate() const noexcept {
        if( next == nullptr ) {
            return true;
        }
        //check for recursion
        if( next == next->next ) {
            std::cout << PROGRAM_NAME << ": Recursion!" << std::endl;
            return false;
        }
        return true;
    }

    virtual bool operator>( const Node& rightSide ) {
        return compareByAddress( this, &(Node&)rightSide );
    }
};