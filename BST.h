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
	Node<string> *myBST = new Node<string>;
	unsigned int elementCount;
	// Put your code here!
          

    // Utility methods
    bool insertR(const ElementType& element, Node<ElementType>* current);
    ElementType& retrieveR(const ElementType& targetElement, Node<ElementType>* current) const throw(ElementDoesNotExistInBSTException);
	void traverseInOrderR(Node<ElementType>*current) const;

	//Overload Operators
	// Description: Overloads < for comparing strings
	bool operator<(const string& rhs) {
		// Compare both string  objects
		// int compare;
		if ((this.compare(rhs))<0) {
			return true;
		}
		else {
			return false;
		}
	} // end of operator<

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
	void traverseInOrder(Node<ElementType>*current) const;
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
	};
	else {
		insertR(newElement, myBST);
	}
}

template <class ElementType>
ElementType& BST<ElementType>::retrieve(const ElementType& targetElement){ //throw(ElementDoesNotExistInBSTException) {
	if (elementCount==0) {
		cout<<"error:retrieve() called from empty BST"<<endl;
	}
	else {
		retrieveR (targetElement, myBST);
	}
}


// Time efficiency: O(n)
template <class ElementType>
void BST<ElementType>::traverseInOrder(Node<ElementType>*current) const {
	//recursively traverse in order and returning the element of root to be outputted
	if (elementCount==0) {
		cout<<"empty BST"<<endl;
	}
	else {
		traverseInOrderR(current);
	}
}

template <class ElementType>
bool BST<ElementType>::insertR(const ElementType& element, Node<ElementType>* current) {
	//if current data isn't empty
	if (current->getData!="") {
		//case1: if the current element is larger, go left
		if (element<current->getData() &&current->hasLeft()) {
			insertR(element, current->getLeft());
				}
		//case2: if current element is smaller, go right
		else if (current->hasRight() {
			insertR(element, current->getRight());
		}

		else if (current->getData()==element) {
			cout<<"error: element already in BST"<<endl;
			return false;
		}
	}
	else {	
		current->setData(element);
		return true;
	}
}

template <class ElementType>
ElementType& BST<ElementType>::retrieveR(const ElementType& targetElement, Node<ElementType>* current) const {//throw(ElementDoesNotExistInBSTException){
	// case 1: data is empty
	if (current->getData()=="") {
		cout<<"***Not Found!***"<<endl;
	}
	// case 2: current data is target element, return
	else if (current->getData==targetElement) {
		return current->getData();
	}
	// case 3: curent data smaller and has right node, go right
	else if (current->getData<targetElement && current->hasRight()) {
		retrieveR(targetElement, current->getRight());
	}
	// case 4: current has left, go left
	else if (current->hasLeft()) {
		retrieveR(targetElement, current->getLeft());
	}
	// default case: to be tested?
	else {
		cout<<"error: 0/4 test cases met. targetElement: "<<targetElement<<" current data:"<<current->getData()<<endl;
		cout<<"***Not Found!***"<<endl;
	}
}

template <class ElementType>
void BST<ElementType>::traverseInOrderR(Node<ElementType>*current) const {
	//first traverse left
	if(current->hasLeft()) {
		traverseInOrderR(current->getLeft());
	}
	//then print current element
	else {
		cout<<current->getData();
	}
	//then traverse right
	if(current->hasRight()) {
		traverseInOrderR(current->getRight());
	}
}