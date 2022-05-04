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

/// A Object that holds a SinglyLinkedList of Animal Objects
class List{
protected:
    Node* head = nullptr;            ///< The Head pointer of the list/where it starts
    unsigned int currentCount = 0;   ///< Count of Objects in list

public:
    bool empty() const noexcept;                    ///< Check if the list is empty
    bool isInList( Node* nodeToCheck ) const;       ///< Check if a Node is in the list
    bool isListSorted() const noexcept;             ///< Check if list is sorted, the list is never sorted so this is always false
    virtual bool validate() const noexcept = 0;     ///< Check if List is valid

    // gets next node in list
    static Node* get_next(const Node* currentNode );    ///< Get the Next node in a list given a Node already in the list

    // gets the size of list
    unsigned int size() const noexcept;                 ///< Get the current size of the list

    // Get the first node in the list
    Node* getFirstInList() const noexcept;              ///< Get the first Node in the list

    //Delete all nodes
    void deleteAllNodes() noexcept;                     ///< Delete all the Nodes

    //Dump list
    virtual void dump() const noexcept = 0;             ///< Dump the contents of a Node

    // Remove first Node in list
    virtual Node* pop_front() noexcept = 0;             ///< Remove the first Node in the list and return it

    //Count objects in list
    void countCurrentNumberOfObjects();                 ///< Count the current number of objects in a list
};