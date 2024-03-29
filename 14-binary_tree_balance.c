#include "binary_trees.h"

/**
 * binary_tree_height - Functions that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	return (1 + (height_l > height_r ? height_l : height_r));
}

/**
 * binary_tree_balance - fun that measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_l, balance_r;

	if (tree == NULL)
		return (0);

	balance_l = binary_tree_height(tree->left);
	balance_r = binary_tree_height(tree->right);

	return (balance_l - balance_r);
}
