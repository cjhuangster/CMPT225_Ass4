/*
 * BST.h
 * 
 * Description: Data collection Binary Search Tree ADT class.
 *              Link-based implementation.
 *
 * Class invariant: It is always a BST.
 * 
 * Author: Michael Huang
 * Date: Nov 13, 2019
 */

	// Put your code here! 

// #include <iostream>
// #include <sstream>
#include "BSTNode.h"
#include "ElementAlreadyExistsInBSTException.h"
#include "ElementDoesNotExistsInBSTException.h"



template <class ElementType>
class BST {
	
private:
	BSTNode*myBST = new BSTNode;
	unsigned int elementCount;
	// Put your code here!
        // Description: Overloads == for comparing strings
        bool operator==(const string& rhs) {
            // Compare both string  objects
            // int compare;
            if ((this->data.compare(rhs))<0) {
                return true;
            }
            else {
                return false;
            }
        } // end of operator<	          

    // Utility methods
    bool insertR(const ElementType& element, BSTNode<ElementType>* current);
    ElementType& retrieveR(const ElementType& targetElement, BSTNode<ElementType>* current) const throw(ElementDoesNotExistInBSTException);
	// void traverseInOrderR();// Put your code here!) const;
         

public:
    // Constructors and destructor:
	BST();                               // Default constructor
    BST(ElementType& element);           // Parameterized constructor 
	BST(const BST<ElementType>& aBST);   // Copy constructor 
    ~BST();                              // Destructor 
	
    // BST operations:

    // Time efficiency: O(1)
	int getElementCount() const;

	// Time efficiency: O(log2 n)
	void insert(const ElementType& newElement); // throw(ElementAlreadyExistsInBSTException);	

	// Time efficiency: O(log2 n)
	ElementType& retrieve(const ElementType& targetElement); //throw(ElementDoesNotExistInBSTException);

	// Time efficiency: O(n)
	// void traverseInOrder();// Put your code here!) const;
	
};

template <class ElementType>
BST<ElementType>::BST() {
	elementCount = 0;
}

template <class ElementType>
BST<ElementType>::BST( ElementType& element) {
	myBST->setData = element;
	elementCount = 1;
}

template <class ElementType>
BST<ElementType>::BST(const BST<ElementType>& aBST) {
	myBST = aBST;
	elementCount = 1;
}

template <class ElementType>
BST<ElementType>::~BST() {
	delete myBST;
}


template <class ElementType>
int BST<ElementType>::getElementCount() const {
 return elementCount;
}

template <class ElementType>
void BST<ElementType>::insert(const ElementType& newElement){ //throw(ElementAlreadyExistsInBSTException) {
	if (elementCount==0) {
		myBST->setData(newElement);
	}
	else {
		
	}
}

template <class ElementType>
ElementType& BST<ElementType>::retrieve(const ElementType& targetElement){ //throw(ElementDoesNotExistInBSTException) {

}

// template <class ElementType>
// void BST<ElementType>::traverseInOrder() {

// }
