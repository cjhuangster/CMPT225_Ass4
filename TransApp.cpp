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
	        cout<<str<<endl; // Prints our STRING.
            myBST->insert(str); 
        }  
	infile.close();  
   
    //get input for translator  
    while (getline(cin,str)) {
        if (str=="display") { 
            myBST->traverseInOrder();  
        }
        else { 
            myBST->retrieve(str);  
        } 
    }
    return 0; 
}  
 
void getText(const BST<string>&aBST) {

}

void getInput(const BST<string>&aBST) {
}

bool compareEquivalence(const string &aString, const string &bString)
{
    unsigned int aCounter = 0;
    // unsigned int aSize = this.size();
    unsigned int aSize = aString.size();
    unsigned int bCounter = 0;
    // unsigned int bSize = rhs.size();
    unsigned int bSize = bString.size();
    // cout << "the words to be compared are: " << this << " " << rhs << endl;
    // while (this[aCounter] != ':' && aCounter < aSize)
    while (aString[aCounter] != ':' && aCounter < aSize)

    {
        aCounter++;
    }

    // while (rhs[bCounter] != ':' && bCounter < bSize)
    while (bString[bCounter] != ':' && bCounter < bSize)
    {
        bCounter++;
    }

    //case 1: english words of different length
    if (aCounter != bCounter)
    {
        cout << "compared words of different length" << aCounter << bCounter << endl;
        return false;
    }

    //case 2: same length words but different char
    else
    {
        string aEnglish = aString.substr(0, aCounter);
        string bEnglish = bString.substr(0, aCounter);
        if (aEnglish.compare(bEnglish) != 0)
        {
            cout << "compared english words with different char makeup" << endl;
            return false;
        }
    }
    return true; 
} // end of operator==        