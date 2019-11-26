/*
 * ElementDoesNotExistInBSTException.h
 *
 * Class Description: Defines the exception that is thrown when an insert attempt on a BST with a pre-included element is made 
 *                    
 *
 * Author: Inspired from our textbook's authors Frank M. Carrano and Tim Henry.
 *         Copyright (c) 2013 __Pearson Education__. All rights reserved.
 */
 
#pragma once

#include <stdexcept>
#include <string>

using namespace std;
//what type of error is this?
class ElementDoesNotExistInBSTException : public logic_error
{
public:
   ElementDoesNotExistInBSTException(const string& message = "");
   
   
}; // end ElementDoesNotExistInBSTException 

ElementDoesNotExistInBSTException::ElementDoesNotExistInBSTException(const string& message): 
logic_error("***Not Found!*** ")
{ 
}  // end constructor