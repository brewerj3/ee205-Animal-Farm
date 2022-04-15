///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

//class to make the linked list
class Node{
protected:
    Node* next;
    static bool compareByAddress(const Node *node1, const Node *node2);

public:
    virtual void dump() const;
    virtual bool validate() const noexcept;
    virtual bool operator>(const Node &rightSide);
};