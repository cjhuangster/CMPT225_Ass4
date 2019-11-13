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

#include "BSTNode.h"



template <class ElementType>
class BST {
	
private:

	// Put your code here!          

    // Utility methods
    bool insertR(const ElementType& element, BSTNode<ElementType>* current);
    ElementType& retrieveR(const ElementType& targetElement, BSTNode<ElementType>* current) const throw(ElementDoesNotExistInBSTException);
	void traverseInOrderR(// Put your code here!) const;
         

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
	void insert(const ElementType& newElement) throw(ElementAlreadyExistsInBSTException);	

	// Time efficiency: O(log2 n)
	ElementType& retrieve(const ElementType& targetElement) throw(ElementDoesNotExistInBSTException);

	// Time efficiency: O(n)
	void traverseInOrder(// Put your code here!) const;
	
};