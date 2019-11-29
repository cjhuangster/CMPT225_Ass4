#include "BST.h"
#include "BSTNode.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void getText(BST<string> *aBST);
void getInput(BST<string> *aBST);
bool compareEquivalence(const string &aString, const string &bString);

int main()
{
    BST<string> *myBST = new BST<string>();
    getText(myBST);
    getInput(myBST);

    return 0;
}

void getText(BST<string> *aBST)
{
    // getText(); //get dataFile.txt stored word pairings
    string str;
    ifstream infile;
    infile.open("dataFile.txt");
    while (getline(infile, str)) // To get you all the lines.
    {
        try {
            aBST->insert(str);
        }
        catch (ElementAlreadyExistsInBSTException&anException) {
            cout<<"Insert() unsuccessful because" <<anException.what()<<endl;
        }
    } 
    infile.close();
}

void getInput(BST<string> *aBST)
{
    string str; 
    //get input for translator 
    while (getline(cin, str))
    {
        if (str == "display")
        {
            aBST->traverseInOrder();
        } 
        else
        {
            try{
                aBST->retrieve(str);  
            }
            catch (ElementDoesNotExistInBSTException&anException) {
                cout<<"->***Not Found***" <<endl;
            }
        }
    }
}
   
