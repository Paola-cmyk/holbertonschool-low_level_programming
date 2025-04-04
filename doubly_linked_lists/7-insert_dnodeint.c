#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h:  pointer to the head of the doubly linked list
 * @idx: index where the new node should be added
 * @n: value to be added to the new node
 * Return: the address of the new node,
 * or NULL if it failed or index is invalid
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new node, *current = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}

	if (current == NULL && i < idx)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (current != NULL)
	{
		new_node-> = current;
		new_node->prev = current->prev;

		if (current->prev != NULL)
		{
			current->prev->next = new_node;
		}
		current->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
	}

	return (new_node);
}

