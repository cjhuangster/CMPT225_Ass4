/*
 * Node.h
 * 
 * Description: BST Node ADT Class.
 *              
 *
 * Class invariant: .
 * 
 * Author: Michael Huang
 * Date: Nov 13, 2019
 */

// #include <cstdlib>
#include <string>
#include <iostream>

#pragma once
using namespace std;

template <class ELementType>
class Node {
     private:
        
     public:
        ELementType data;
        Node*left;
        Node*right;

        //  constructors
        Node() {
            // data=
            left=NULL;
            right=NULL;
            // parent=NULL;
        }  

        // Node(const ElementType &newData) {
        //     data = newData;
        //     left=NULL;
        //     right=NULL;
        //     // parent=NULL;
        // }

        // Node(const ElementType &newData, const Node*newLeft, const Node*newRight) {
        //     data = newData;
        //     left=newLeft;
        //     right=newRight;
        //     // parent=NULL;
        // }
        // destructor
        ~Node() {
            // data="";
            left=NULL;
            right=NULL;
            // parent=NULL;
            delete left;
            delete right;
            // delete parent;
            // delete;
        }
        //getters
        ELementType getData () const; 
        ELementType*getLeft();
        ELementType*getRight();
        //setters
        void setData (const ELementType &newData);
        void setLeft(Node*newLeft);
        void setRight(Node*newRight);

        //boolean helpere functions
        bool isLeaf() const;
        bool hasLeft() const;
        bool hasRight() const;   
 };

//Getters
template <class ElementType>
ElementType Node<ElementType>::getData() const {;
    return (this->data);
}


template<class ElementType>
ElementType* Node<ElementType>::getLeft() {
    return left;
}

template<class ElementType>
ElementType* Node<ElementType>::getRight() {
    return right;
}

//Setters
template <class ElementType>
void Node<ElementType>::setData (const ElementType &newData) {
    this->data=newData;
}

template <class ElementType>
void Node<ElementType>::setLeft(Node*newLeft) {
    this->left=newLeft;
}

template <class ElementType>
void Node<ElementType>::setRight(Node*newRight) {
    this->right=newRight;
}

//boolean helper functions
template <class ElementType>
bool Node<ElementType>::isLeaf() const {
    if (!hasLeft()&&!hasRight()) {
        return true;
    }
    else {
        return false;
    }
}

template <class ElementType>
bool Node<ElementType>::hasLeft() const {
    if (left!=NULL) {
        return true;
    }
    else {
         return false;
    }
} 

template <class ElementType>
bool Node<ElementType>::hasRight() const {
    if (right!=NULL) {
        return true;
    }
    else {
         return false;
    }
} 