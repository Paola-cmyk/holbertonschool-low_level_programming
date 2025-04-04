#include "lists.h"

/**
 * free_dlistint - frees a dilistint_t list
 * @head: pointer to the head of the doubly linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
