#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: parent of the node
 * @value: Value in te new node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ant_node = malloc(sizeof(binary_tree_t));

	if (ant_node == NULL)
	{
		return (NULL);
	}

	ant_node->n = value;
	ant_node->parent = parent;
	ant_node->left = NULL;
	ant_node->right = NULL;

	return (ant_node);
}
