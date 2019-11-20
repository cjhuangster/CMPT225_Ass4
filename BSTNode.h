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
        ELementType data;
        Node*left;
        Node*right;
        //how to initialize/change parent data?
        // Node*parent;

     public:
        //  constructors
        Node() {
            // data=
            left=NULL;
            right=NULL;
            // parent=NULL;
        }  

        Node(ElementType&newData) {
            data = newData;
            left=NULL;
            right=NULL;
            // parent=NULL;
        }

        Node(ElementType&newData, Node*newLeft, Node*newRight) {
            data = newData;
            left=newLeft;
            right=newRight;
            // parent=NULL;
        }
        // destructor
        ~Node() {
            // data="";
            left=NULL;
            right=NULL;
            // parent=NULL;
            delete left;
            delete right;
            // delete parent;
            delete this;
        }
        //getters
        ELementType&getData () const; 
        // why can't I put const beside getLeft/right??
        Node getLeft();
        Node*getRight();
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
ElementType&Node<ElementType>::getData() const {
    return data;
}


template<class Node>
Node* getLeft () {
    return left;
}

template<class Node>
Node*getRight() {
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
bool Node<ElementType>::hasLeft() const {
    if (right!=NULL) {
        return true;
    }
    else {
         return false;
    }
} 