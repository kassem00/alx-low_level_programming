#include "lists.h"

/**
 * get_dnodeint_at_index - funcation that get data by index
 * @head:linked list node
 * @index:index to get data
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
