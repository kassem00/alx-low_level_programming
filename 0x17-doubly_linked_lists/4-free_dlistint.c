#include "lists.h"

/**
 * add_dnodeint_end - function that add node in head
 * @head:linked list node
 * @n:data to store in new node
 * Return: size_t which number of node
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
