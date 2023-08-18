#include "lists.h"

/**
 * get_dnodeint_at_index - funcation that get data by index
 * @head:linked list node
 * @index:index to get data
 * Return: size_t which number of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node != NULL && i <= index)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
