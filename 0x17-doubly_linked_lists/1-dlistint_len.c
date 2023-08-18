#include "lists.h"

/**
 * dlistint_len - funcation that print linked list
 * @h:linked list node
 * Return: size_t which number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
