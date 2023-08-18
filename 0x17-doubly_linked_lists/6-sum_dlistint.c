#include "lists.h"

/**
 * sum_dlistint - funcation that sum all value in int linked list
 * @head:linked list node
 * Return: size_t which number of node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
