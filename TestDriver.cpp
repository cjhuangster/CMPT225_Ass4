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
    
 
   // //BSTNode Test Driver
   // Node<int> *myNode = new Node<int>;
   // myNode->data=5;
   // cout<<myNode->data<<endl;
   // Node<int> *temp = new Node<int>;
   // temp->data=69; 
   // myNode->setLeft(temp);
   // cout<<myNode->getLeft()->getData()<<endl;
} 