#include "binarytree.h"

void BinaryTree::insertNode(string w) {
	TreeNode *newNode = nullptr;
	newNode = new TreeNode; 
	newNode->word = w; 
	newNode->left = newNode->right = nullptr;
	insert(root, newNode);
}

void BinaryTree::insert(TreeNode*& nodePtr, TreeNode 8 & newNode) {
	if (nodePtr == nullptr) //if there is no root
		nodePtr = newNode; //we set the root
	else if(newNode->word  )
}