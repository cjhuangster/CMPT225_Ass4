/*
 * ElementAlreadyExistsInBSTException.cpp
 *
 * Class Description: Defines the exception that is thrown when an insert attempt on a BST with a pre-included element is made 
 *                    
 *
 * Author: Inspired from our textbook's authors Frank M. Carrano and Tim Henry.
 *         Copyright (c) 2013 __Pearson Education__. All rights reserved.
 */
 

#include "ElementAlreadyExistsInBSTException.h"  

ElementAlreadyExistsInBSTException::ElementAlreadyExistsInBSTException(const string& message): 
logic_error("Empty Data Collection ADT Class Exception: " + message)
{
}  // end constructor

// End of implementation file.