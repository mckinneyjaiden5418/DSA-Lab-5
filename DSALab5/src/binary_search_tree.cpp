#include "../include/binary_search_tree.h"

bool BST::insert(int value, TreeNode*& node) {
	if (node == nullptr) {
		node = new TreeNode(value);
		return true;
	}

	if (node->value > value) return insert(value, node->left);
	else if (node->value < value) return insert(value, node->right);
	return false; // node->value == value
}

bool BST::insert(int value) {
	return insert(value, root);
}

bool BST::search(int value) {
	return false;
}
	
int BST::count() {
	return -1;
}
	
int BST::height() {
	return -1;
}

bool BST::remove(int value) {
	return false;
}