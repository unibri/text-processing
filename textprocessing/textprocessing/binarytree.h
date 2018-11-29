#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <locale>
#include <cstring>
#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include <fstream>
using namespace std;

//will be a template class later, for now we will use strings ONLY
class BinaryTree {
private:
	struct TreeNode {
		TreeNode() : frequency(0) {}
		string word; //stores word
		TreeNode* left;
		TreeNode* right;
		int frequency; //stores frequency
	};
	TreeNode *root;

	void insert(TreeNode*&, TreeNode*&);
	void displayInOrder(TreeNode *) const;
	void displayPreOrder(TreeNode *) const;
	void displayPostOrder(TreeNode *) const;

public:
	BinaryTree() {
		root = nullptr;
	}
	void insertNode(string);
	void searchNode(string);
	void displayInOrder() const{ 
		displayInOrder(root); 
	}
	void displayPreOrder() const { 
		displayPreOrder(root); 
	}
	void displayPostOrder() const{ 
		displayPostOrder(root); 
	}
};