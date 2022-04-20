///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Node.h"

class List{
protected:
    Node* head = nullptr;
    unsigned int currentCount = 0; // Count of Objects

public:
    bool empty() const noexcept;
    bool isInList( Node* nodeToCheck ) const;
    bool isListSorted() const noexcept;
    virtual bool validate() const noexcept = 0;

    // gets next node in list
    static Node* get_next(const Node* currentNode );

    // gets the size of list
    unsigned int size() const noexcept;

    // Get the first node in the list
    Node* getFirstInList() const noexcept;

    //Delete all nodes
    void deleteAllNodes() noexcept;

    //Dump list
    virtual void dump() const noexcept = 0;

    // Remove first Node in list
    virtual Node* pop_front() noexcept = 0;

    //Count objects in list
    void countCurrentNumberOfObjects();
};