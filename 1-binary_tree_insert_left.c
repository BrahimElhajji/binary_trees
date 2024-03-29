#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the leftchild of another node
 * @parent: parent node
 * @value: Value for the new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ant_node;

	if (parent == NULL)
		return (NULL);

	ant_node = binary_tree_node(parent, value);
	if (ant_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		ant_node->left = parent->left;
		parent->left->parent = ant_node;
	}

	parent->left = ant_node;

	return (ant_node);
}

