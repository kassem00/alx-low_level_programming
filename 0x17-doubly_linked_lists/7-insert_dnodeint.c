#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *prev = NULL, *new_node;
	unsigned int cont = 0;

	if (*h == NULL)
		return (NULL);

	while (tmp != NULL && cont < idx)
	{
		prev = tmp;
		tmp = tmp->next;
		cont++;
	}

	if (cont < idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev;

	if (prev != NULL)
		prev->next = new_node;
	else
		*h = new_node;

	if (tmp != NULL)
		tmp->prev = new_node;

	new_node->next = tmp;

	return (new_node);
}
