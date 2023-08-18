#include "lists.h"

/**
 * add_dnodeint - function that add node in head
 * @head:linked list node
 * @n:data to store in new node
 * Return: size_t which number of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
