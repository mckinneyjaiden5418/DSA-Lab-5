#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

struct TreeNode {
	int value;
	TreeNode* left;
	TreeNode* right;
};

class BST {
private:
	// placeholder
public:
	bool insert(int value);
	bool search(int value);
	int count();
	int height();
	bool remove(int value);
};

#endif