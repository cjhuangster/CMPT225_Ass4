#include "BST.h"
#include "BSTNode.h"
#include <string>
#include <iostream>
using namespace std;


bool compareEquivalence (const string &aString, const string &bString);

int main()
{
   string aTest = "me:wo";
   string bTest = "me";
   string cTest = "mew";
   string dTest = "";
   string eTest = "mw:wo";
   cout<<compareEquivalence(aTest, bTest)<<endl;
   cout<<compareEquivalence(aTest, cTest)<<endl;
   cout<<compareEquivalence(aTest, dTest)<<endl;
   cout<<compareEquivalence(aTest, eTest)<<endl;
   // cout<< "aTest.size: "<<aTest.size()<<endl;
   // cout<< "bTest.size: "<<bTest.size()<<endl;
   // cout<< "aTest[2]: "<< aTest[2]<<endl;
   
   // cout<<compareEquivalence("me:wo", "me:hi")<<endl;
   // cout<<compareEquivalence("me:wo", "ge:wo")<<endl;

   // BST Test Driver
   //checkEquivalence Test
   // cout<<"test 1 same:"<<compareEquivalence ("AA:ZZ", "AA:ZZ")<<endl;
   // cout<<"test 2 not same:"<<compareEquivalence ("AA:ZZ", "AAA:ZZ")<<endl;
   // cout<<"test 3 not same:"<<compareEquivalence ("AA:XXX", "BB:XXX")<<endl;

   // BST<string> *myBST = new BST<string>();
   // myBST->insert("AA:ZZ");
   // myBST->insert("AA:XX");
   // string ZZ="AA:ZZ";
   // string XX="AA:";
   // bool equal = ZZ==XX;
   // cout<<equal<<endl;
   // cout<<"size ZZ: "<<ZZ.size()<<endl;
   // int i = 0;
   // while (ZZ[i]!=':') {
   //    i++;
   // }
   // cout<<i<<" "<<ZZ[i];
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
		unsigned int aSize = aString.size();
		unsigned int bSize = bString.size();
		unsigned int aCounter = aSize;
		unsigned int bCounter = bSize;
		char toCompare;
		char toCompare2;
		
		for (int i=0;i<aSize;i++) {
			toCompare = aString[i];
			if (toCompare == ':') {
				aCounter = i;
			}
		}

		for (int i=0;i<bSize;i++) {
			toCompare2 = bString[i];
			if (toCompare2 == ':') {
				bCounter = i;
			}
		}

		//case 1: english words of different length
		if (aCounter != bCounter)
		{
         cout<<"diffrent length"<<endl;
			return false;
		}

		//case 2: same length words but different char
		else {
			for (int i=0; i<aCounter;i++) {
				if (aString[i]!=bString[i]) {
               cout<<"different char pre :"<<endl;
					return false;
				}
			}
		}  
		return true;
	} // end of operator==