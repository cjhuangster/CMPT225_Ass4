#include "BST.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
    
   BST<string>*myBST = new BST<string>();
   myBST->getElementCount();
   myBST->insert("AAA");
   
}  