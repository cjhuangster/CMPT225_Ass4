/*
 * BSTNode.h
 * 
 * Description: BST Node ADT Class.
 *              
 *
 * Class invariant: .
 * 
 * Author: Michael Huang
 * Date: Nov 13, 2019
 */

#include <string>
#include <iostream>
using namespace std;

template <class ELementType>
class BSTNode {
     private:
        string data;
        BSTNode*leftChild;
        BSTNode*rightChild;
        BSTNode*parent;

        // Description: Overloads < for comparing strings
        bool operator<(const string& rhs) {
            // Compare both string  objects
            // int compare;
            if ((this->data.compare(rhs))<0) {
                return true;
            }
            else {
                return false;
            }
        } // end of operator<

     public:
        BSTNode ();
        BSTNode(std::string &newData);
        BSTNode(BSTNode &newNode);
        ~BSTNode ();
        bool setData (const string &newData);
        // bool setChild (const std::string &newData);
        string&getData (); 
        
 };

template <class ElementType>
BSTNode<ElementType>::BSTNode() {
    data="";
    leftChild=NULL;
    rightChild=NULL;
    parent=NULL;
}

template <class ElementType>
BSTNode<ElementType>::BSTNode(std::string &newData) {
    data=newData;
    leftChild=NULL;
    rightChild=NULL;
    parent=NULL;
}

template <class ElementType>
BSTNode<ElementType>::BSTNode(BSTNode &newNode) {
    data=newNode.data;
    leftChild=newNode.leftChild;
    rightChild=newNode.rightChild;
    parent=newNode.parent;
}

template <class ElementType>
BSTNode<ElementType>::~BSTNode() {
    data="";
    leftChild=NULL;
    rightChild=NULL;
    parent=NULL;
    delete leftChild;
    delete rightChild;
    delete parent;
    delete this;
}

template <class ElementType>
bool BSTNode<ElementType>::setData (const std::string &newData) {
    data=newData;
    return true;
}

// //Description: setter function for BSTNode, requires op overload of >
// bool BSTNode::setChild (const std::string &newData) {
//     if ((this->data)<newData) {
//         this->leftChild->data=newData;
//     }
//     else {
//         this->rightChild->data=newData;
//     }
// }