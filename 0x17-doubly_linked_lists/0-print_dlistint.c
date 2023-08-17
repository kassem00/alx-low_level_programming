#include "lists.h"

/**
 * print_dlistint - funcation that print linked list
 * @h:linked list node
 * Return: size_t which number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h->next != NULL)
	{
		const dlistint_t *temp = h;

		while (1)
		{
			i++;
			printf("%d\n", temp->n);
			if (temp->next != NULL)
				temp = temp->next;
			else
				return (i);
		}
	}
	else
		return (0);
}
