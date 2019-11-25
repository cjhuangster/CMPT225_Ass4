#include "BST.h"
#include "BSTNode.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
   // BST Test Driver
   BST<string>*myBST = new BST<string>();
   // cout<<myBST->getElementCount()<<endl;
   myBST->insert("AAA");
   myBST->insert("BBB");
   myBST->insert("CCC");
   myBST->insert("A");
   myBST->insert("CC");   
   myBST->insert("AAAA");
   myBST->insert("BBBB");
   myBST->insert("CCCC");
   myBST->insert("AA"); 
   myBST->insert("BB"); 
   myBST->traverseInOrder();
   cout<<myBST->getElementCount()<<endl;
   try {
      cout<<"retrieving ABC (not in BST)"<<myBST->retrieve("ABC")<<endl; 
   }
   catch (ElementDoesNotExistInBSTException & anException) {
      cout<<"Error: Attempted to retrieve an element not in BST"<<endl;
   }
   string returned = myBST->retrieve("AA");
   cout<<"retrieving AA"<<endl<<returned<<endl;
   returned = myBST->retrieve("BB"); 
   cout<<"retrieving BB"<<returned<<endl;  
   // //BSTNode Test Driver
   // Node<int> *myNode = new Node<int>;  
   // myNode->data=5;  
   // cout<<myNode->data<<endl; 
   // Node<int> *temp = new Node<int>;
   // temp->data=69;     
   // myNode->setLeft(temp);  
   // cout<<myNode->getLeft()->getData()<<endl; 
}          