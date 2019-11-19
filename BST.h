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
          

    // Utility methods
    bool insertR(const ElementType& element, BSTNode<ElementType>* current);
    ElementType& retrieveR(const ElementType& targetElement, BSTNode<ElementType>* current) const throw(ElementDoesNotExistInBSTException);
	void traverseInOrderR() const;// Put your code here!) const;
	
	// Description: Overloads == for comparing english section (before:) of words
	//TO BE TESTED
	bool operator==(const string& rhs) {
		unsigned int aCounter = 0;
		unsigned int aSize = this.size();
		unsigned int bCounter = 0;
		unsigned int bSize = rhs.size();
		cout<<"the words to be compared are: "<<this<<" "<<rhs<<endl;
		while (this[aCounter]!=":" && aCounter<aSize) {
			aCounter++;
		}
		
		while (rhs[bCounter]!=":" && bCounter<bSize) {
			bCounter++;
		}

		//case 1: english words of different length
		if (aCounter!=bCounter) {
			cout<<"compared words of different length"<<aCounter<<bCounter<<endl;
			return false;
		}

		//case 2: same length words but different char
		else {
			string aEnglish = this.substr(0,aCounter);
			string bEnglish = rhs.substr(0,aCounter);
			if (aEnglish.compare(bEnglish)!=0) {
				cout<<"compared english words with different char makeup"<<endl;
				return false;
			}
		}
		return true;
	} // end of operator==	

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
	*myBST = *aBST;
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
	BSTNode*current = new BSTNode(myBST);
	else {
		// insertR(newElement, current);
	}
}

template <class ElementType>
ElementType& BST<ElementType>::retrieve(const ElementType& targetElement){ //throw(ElementDoesNotExistInBSTException) {

}

template <class ElementType>
bool BST<ElementType>::insertR(const ElementType& element, BSTNode<ElementType>* current){ //throw(ElementDoesNotExistInBSTException) {
	while (current.data!="") {
		
	}
	current.data=element;
}

template <class ElementType>
ElementType& BST<ElementType>::retrieveR(const ElementType& targetElement, BSTNode<ElementType>* current) const throw(ElementDoesNotExistInBSTException){

}

