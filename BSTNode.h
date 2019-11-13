/*
 * BSTNode.h
 * 
 * Description: BST Node ADT Class.
 *              
 *
 * Class invariant: .
 * 
 * Author: Michael Huang
 * Date: Nov 13, 2019
 */

 template <class ElementType>
 class BSTNode {
     private:
        ElementType*data;
        BSTNode*leftChild;
        BSTNode*rightChild;
        BSTNode*parent;

        bool operator<(const string& rhs) {
            // Compare both string  objects
            int compare;
            if ((this.compare(rhs))<0) {
                return true;
            }
            else {
                return false;
            }
        } // end of operator<

     public:
        //Description: base constructor case
        BSTNode () {
            data=NULL;
            leftChild=NULL;
            rightChild=NULL;
            parent=NULL;
        }

        //Description: filled constructor
        BSTNode (ElementType&newData, ElementType&newLeftChild, ElementType&newRightChild, ElementType&newParent) {
            data=newData;
            leftChild=newLeftChild;
            rightChild=newRightChild;
            parent=newParent;
        }

        //Description: setter function for BSTNode, requires op overload of >
        void setChild (ElementType&newData) {
            if (newData>this.data) {
                leftChild->data=newData;
                leftChild->parent=this;
            }

            else {
                rightChild->data=newData;
                rightChild->parent=this;
            }
        }





 };