#include "BST.h"
#include "BSTNode.h"
#include <string>
#include <iostream>
using namespace std;


bool compareEquivalence (const string &aString, const string &bString);

int main()
{
   // BST Test Driver
   //checkEquivalence Test
   // cout<<"test 1 same:"<<compareEquivalence ("AA:ZZ", "AA:ZZ")<<endl;
   // cout<<"test 2 not same:"<<compareEquivalence ("AA:ZZ", "AAA:ZZ")<<endl;
   // cout<<"test 3 not same:"<<compareEquivalence ("AA:XXX", "BB:XXX")<<endl;

   BST<string> *myBST = new BST<string>();
   myBST->insert("AA:ZZ");
   myBST->insert("AA:XX");
   string ZZ="AA:ZZ";
   string XX="AA:XXX";
   bool equal = ZZ==XX;
   cout<<equal<<endl;
   cout<<"size ZZ: "<<ZZ.size()<<endl;
   int i = 0;
   while (ZZ[i]!=':') {
      i++;
   }
   cout<<i<<" "<<ZZ[i];
   // try 
   // {
   //    BST<string> *myBST = new BST<string>();
   //    // cout<<myBST->getElementCount()<<endl;
   //    myBST->insert("AAA");
   //    myBST->insert("BBB");
   //    myBST->insert("CCC");
   //    myBST->insert("A");
   //    myBST->insert("CC");
   //    myBST->insert("AAAA");
   //    myBST->insert("BBBB");
   //    myBST->insert("CCCC");
   //    myBST->insert("AA:ZZ");
   //    myBST->insert("BB:XX");
   //    myBST->traverseInOrder();
   //    cout << myBST->getElementCount() << endl;
   //    cout << "retrieving AA " <<myBST->retrieve("AA")<< endl;
   //    cout << "retrieving BB " << myBST->retrieve("BB") << endl;
   //    cout << "retrieving ABC (not in BST)" << myBST->retrieve("ABC") << endl;
   // }
   // catch (ElementDoesNotExistInBSTException &anException)
   // {
   //    cout << "Error: Attempted to retrieve an element not in BST" << endl;
   // }

   // catch (ElementAlreadyExistsInBSTException &anException)
   // {
   //    cout << "Error: Attempted to insert an identical element into BST" << endl;
   // }

   // //BSTNode Test Driver
   // Node<int> *myNode = new Node<int>;
   // myNode->data=5;
   // cout<<myNode->data<<endl;
   // Node<int> *temp = new Node<int>;
   // temp->data=69;
   // myNode->setLeft(temp);
   // cout<<myNode->getLeft()->getData()<<endl;
}

	bool compareEquivalence (const string &aString, const string &bString)
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