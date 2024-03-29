#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the rightchild of another node
 * @parent: parent node
 * @value: Value for the new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ant_node;

	if (parent == NULL)
		return (NULL);

	ant_node = binary_tree_node(parent, value);
	if (ant_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		ant_node->right = parent->right;
		parent->right->parent = ant_node;
	}

	parent->right = ant_node;

	return (ant_node);
}

