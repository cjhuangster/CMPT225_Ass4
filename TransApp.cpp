#include "BST.h"
#include "BSTNode.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void getText();
bool compareEquivalence(const string &aString, const string &bString);

int main()
{
    BST<string> *myBST = new BST<string>();
    return 0;
}

void getText() {
    ifstream file("dataFile.txt");
    string str;
    while (getline(file, str))
    {
        cout << str;
    }
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