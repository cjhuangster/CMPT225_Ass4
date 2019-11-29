#include "BST.h"
#include "BSTNode.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void getText(const BST<string>&aBST);
void getInput(const BST<string>&aBST);
bool compareEquivalence(const string &aString, const string &bString);

int main() 
{
    BST<string> *myBST = new BST<string>();
    // getText(); //get dataFile.txt stored word pairings
    string str;
	ifstream infile;
	infile.open ("dataFile.txt");
        while(getline(infile,str)) // To get you all the lines.
        {
	        // cout<<str<<endl; // Prints our STRING.
            myBST->insert(str); 
        }  
	infile.close();  
     
    //get input for translator   
    while (getline(cin,str)) {
        if (str=="display") { 
            myBST->traverseInOrder();  
        }
        else {   
            string returned;
            // returned = myBST->retrieve(str); 
            cout<< myBST->retrieve(str) <<endl;
        }  
    }       
    return 0;  
}  
 
void getText(const BST<string>&aBST) {

}

void getInput(const BST<string>&aBST) {
}