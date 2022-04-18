///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "SinglyLinkedList.h"
SinglyLinkedList::SinglyLinkedList() {
    // Constructor
}

void SinglyLinkedList::push_front(Node *newNode) {
    Node* nodeToPush = get_next( newNode ); //get independent pointer to first node in list
    head = newNode; //make head point to new node
    newNode->next = nodeToPush; //make new node point to the previously first node
}

Node *SinglyLinkedList::pop_front() noexcept {
    Node* oldFirstPointer = head; //get the first Node in linked list
    head = get_next( head ); // set head to the next item in linked list
    return oldFirstPointer; //return first item in linked list
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    Node* nodeToPutLast = get_next( currentNode ); //get the node that is after the currentNode
    currentNode->next = newNode; // make current node point to newNode
    newNode->next = nodeToPutLast; //make newNode point to the last Node
}

void SinglyLinkedList::dump() const noexcept {
    std::cout <<  "SinglyLinkedList: head =[" << List::head << "]" << std::endl;
    for( Node* iterateOverList = head; iterateOverList != nullptr; iterateOverList = iterateOverList->next) {
        iterateOverList->dump();
    }
}

bool SinglyLinkedList::validate() const noexcept { //I am not sure what to check for exactly
    return true;
}
