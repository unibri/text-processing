#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cstring>
#include <locale>
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
	void createReport(TreeNode *, ofstream&) const;


public:
	BinaryTree() {
		root = nullptr;
	}
	void insertNode(string);
	bool searchNode(string);
	void createReport(ofstream& r) const{ 
		createReport(root, r);
	}
};