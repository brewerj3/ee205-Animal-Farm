///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "List.h"

bool List::empty() const noexcept{

    if( currentCount == 0 ) {
        return true;
    }
    if( currentCount < 0 ) {
        std::cout << PROGRAM_NAME << ": Something is wrong with currentCount" << std::endl;
        return false;
    }
    return false;
}

bool List::isInList( Node *nodeToCheck ) const {
    Node* iterateOverList = head;
    while( iterateOverList != nullptr ) {
        if( iterateOverList == nodeToCheck ) {
            return true;
        }
        iterateOverList = iterateOverList->next;
    }
    if( iterateOverList == nodeToCheck ) {
        return true;
    }
    return false;
}

unsigned int List::size() const noexcept {
    return currentCount;
}

bool List::isListSorted() const noexcept {
    return false; //the list is not required to be sorted. Yet.
}

Node *List::get_next(const Node *currentNode) {
    return currentNode->next;
}

Node *List::getFirstInList() const noexcept {
    return head;
}

void List::deleteAllNodes() noexcept {
    countCurrentNumberOfObjects(); //count number of Objects in list
    while( head != nullptr ) {
        delete pop_front(); //delete node
        currentCount--; //count down by 1
    }
    head = nullptr;
}

void List::countCurrentNumberOfObjects() {
    currentCount = 0;
    for(Node* iterateOverList = head; iterateOverList != nullptr; iterateOverList = iterateOverList->next) {
        currentCount++;
    }
}