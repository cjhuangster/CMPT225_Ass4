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
#include "ElementAlreadyExistsInBSTException.h"
#include "ElementDoesNotExistsInBSTException.h"

template <class ElementType>
class BST
{

private:
	Node<ElementType> *root = new Node<ElementType>;
	unsigned int elementCount;
	// Put your code here!

	// Utility methods
	bool insertR(const ElementType &element, Node<ElementType> *current);
	ElementType &retrieveR(const ElementType &targetElement, Node<ElementType> *current) const throw(ElementDoesNotExistInBSTException);
	void traverseInOrderR(Node<ElementType> *current) const;

	//Overload Operators
	// Description: Overloads < for comparing strings
	bool operator<(const string &rhs)
	{
		// Compare both string  objects
		// int compare;
		if ((this.compare(rhs)) < 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	} // end of operator<

	bool operator==(const string &rhs)
	{
		unsigned int aCounter = 0;
		unsigned int aSize = this.size();
		unsigned int bCounter;
		unsigned int bSize = rhs.size();
		
		char toCompare;
		for (int i=0;i++;i<this.size()) {
			toCompare = this[i];
			if (toCompare == ':') {
				aCounter = i;
			}
		}
		char toCompare2;
		for (int i=0;i++;i<rhs.size()) {
			toCompare2 = rhs[i];
			if (toCompare2 == ':') {
				bCounter = i;
			}
		}

		if (aCounter==0) {
			aCounter = this.size();
		}

		if (bCounter==0) {
			bCounter = rhs.size();
		}


		//case 1: english words of different length
		if (aCounter != bCounter)
		{
			return false;
		}

		//case 2: same length words but different char
		else
		{
			string aEnglish = this.substr(0, aCounter-1);
			string bEnglish = rhs.substr(0, aCounter-1);
			if (aEnglish.compare(bEnglish) != 0)
			{
				return false;
			}
		}
		return true;
	} // end of operator==

public:
	// Constructors and destructor:
	BST();							   // Default constructor
	BST(ElementType &element);		   // Parameterized constructor
	BST(const BST<ElementType> &aBST); // Copy constructor
	~BST();							   // Destructor

	// BST operations:

	// Time efficiency: O(1)
	int getElementCount() const;

	// Time efficiency: O(log2 n)
	void insert(const ElementType &newElement) throw(ElementAlreadyExistsInBSTException);

	// Time efficiency: O(log2 n)
	ElementType &retrieve(const ElementType &targetElement) throw(ElementDoesNotExistInBSTException);

	// Time efficiency: O(n)
	void traverseInOrder() const;
};

template <class ElementType>
BST<ElementType>::BST()
{
	elementCount = 0;
}

template <class ElementType>
BST<ElementType>::BST(ElementType &element)
{
	root->setData = element;
	elementCount = 1;
}

template <class ElementType>
BST<ElementType>::BST(const BST<ElementType> &aBST)
{
	root = aBST;
	elementCount = 1;
}

template <class ElementType>
BST<ElementType>::~BST()
{
	delete root;
}

template <class ElementType>
int BST<ElementType>::getElementCount() const
{
	return elementCount;
}

template <class ElementType>
void BST<ElementType>::insert(const ElementType &newElement) throw(ElementAlreadyExistsInBSTException)
{
	if (elementCount == 0)
	{
		root->setData(newElement);
		elementCount++;
	}
	else
	{
		if (!insertR(newElement, root))
		{
			throw ElementAlreadyExistsInBSTException("Error: Attempted to insert an identical element.");
		}
		else
		{
			elementCount++;
		}
	}
}

template <class ElementType>
ElementType &BST<ElementType>::retrieve(const ElementType &targetElement) throw(ElementDoesNotExistInBSTException)
{
	if (elementCount == 0)
	{
		cout << "error:retrieve() called from empty BST" << endl;
	}
	else
	{
		retrieveR(targetElement, root);
	}
}

// Time efficiency: O(n)
template <class ElementType>
void BST<ElementType>::traverseInOrder() const
{
	//recursively traverse in order and returning the element of root to be outputted
	if (elementCount == 0)
	{
		// cout << "empty BST" << endl;
	}
	else
	{
		traverseInOrderR(root);
	}
}

template <class ElementType>
bool BST<ElementType>::insertR(const ElementType &element, Node<ElementType> *current)
{	
	if (current->getData() == element)
	{
		return false;
	}

	else if (current->getData() < element)
	{
		if (current->hasRight())
		{
			current->height++;
			insertR(element, current->getRight());
		}
		else
		{
			Node<ElementType> *temp = new Node<ElementType>(element);
			current->setRight(temp);
			return true;
		}
	}

	else if (current->hasLeft())
	{
		current->height++;
		insertR(element, current->getLeft());
	}

	else
	{
		current->height++;
		Node<ElementType> *temp = new Node<ElementType>(element);
		current->setLeft(temp);
		return true;
	}
}

template <class ElementType>
ElementType &BST<ElementType>::retrieveR(const ElementType &targetElement, Node<ElementType> *current) const throw(ElementDoesNotExistInBSTException)
{
	cout << "target Element:" << targetElement << " current Element:" << current->getData() << endl;
	cout<< (current->data==targetElement)<<endl;
	int aCounter = 0;
	int bCounter = 0;
	char aCompare;
	char bCompare;
	for (int i=0;i<current->data.size();i++) {
		aCompare = current->data[i];
		cout<<i<< aCompare<<" ";
		if (aCompare==':') {
			aCounter = i;
		}
	}

	for (int i=0;i<targetElement.size();i++) {
		bCompare = targetElement[i];
		cout<<i<< bCompare<<" ";
		if (bCompare==':') {
			bCounter = i;
		}
	}
	cout<<"aCounter, data:"<<aCounter<<" "<<current->data[aCounter]<<endl;
	cout<<"bCounter, data:"<<bCounter<<" "<<targetElement[bCounter]<<endl;
	cout<<"current size "<<current->data.size()<<endl;
	cout<<"targetElement size "<<targetElement.size()<<endl;

	
	// case 1: targetElement matched, return
	if (current->data == targetElement)
	// if (compareEquivalence(current->data, targetElement))
	{
		return current->data;
		// ElementType*toReturn = new ElementType;
		// toReturn = current->getData());
		// return toReturn;
	}
	//case 2: targetElement bigger than current data, there is right, go right
	else if (current->getData() < targetElement && current->hasRight())
	{
		retrieveR(targetElement, current->getRight());
	}
	else if (current->hasLeft())
	{
		retrieveR(targetElement, current->getLeft());
	}
	else
	{
		// throw ElementDoesNotExistInBSTException("Error:targetElement not in BST");
		cout<<"***Not Found***"<<endl;
	}
}

template <class ElementType>
void BST<ElementType>::traverseInOrderR(Node<ElementType> *current) const
{
	//first traverse left
	if (current->hasLeft())
	{
		traverseInOrderR(current->getLeft());
	}
	//then print current element
	cout << current->getData() << endl;

	//then traverse right
	if (current->hasRight())
	{
		traverseInOrderR(current->getRight());
	}
}