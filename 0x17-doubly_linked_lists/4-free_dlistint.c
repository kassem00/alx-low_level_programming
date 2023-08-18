#include "lists.h"

/**
 * free_dlistint - function that free full linkedlist
 * @head:linked list node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
