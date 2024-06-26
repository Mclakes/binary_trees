#include "binary_trees.h"

/**
  * binary_tree_size - function that measures d size
  * of a binary tree
  * @tree: is a pointer to the root node of d tree to
  * measure the size
  *
  * Return: Size, If tree is NULL, the function must return 0
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (count);
}
