#include "binarytree.h"

void BinaryTree::insertNode(string w) {
	TreeNode *newNode = nullptr;
	newNode = new TreeNode; 
	newNode->word = w; 
	newNode->left = newNode->right = nullptr;
	insert(root, newNode);
}

void BinaryTree::insert(TreeNode*& nodePtr, TreeNode*& newNode) {
	if (nodePtr == nullptr) {
		nodePtr = newNode;
		(nodePtr->frequency)++;
	}
	else if(newNode->word < nodePtr->word)
		insert(nodePtr->left, newNode);
	else
		insert(nodePtr->right, newNode);
}

bool BinaryTree::searchNode(string w) {
	TreeNode *nodePtr = root;

	while (nodePtr) {
		if (nodePtr->word == w) {
			(nodePtr->frequency)++;
			return true;
		}
		else if (w < nodePtr->word)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}
	return false;
}


void BinaryTree::createReport(TreeNode *nodePtr, ofstream& r) const{
	if (nodePtr){
		createReport(nodePtr->left, r);
		cout << nodePtr->word << " found: " << nodePtr->frequency << endl;
		r << nodePtr->word << "  "<< right<< nodePtr->frequency << endl;
		createReport(nodePtr->right, r);
	 }
 }