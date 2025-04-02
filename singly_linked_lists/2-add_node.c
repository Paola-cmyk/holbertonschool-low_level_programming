#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: pointer to the pointer pf the head of the list
 * @str: string to be duplicated and added to the  new node
 * Return: the address of a new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
