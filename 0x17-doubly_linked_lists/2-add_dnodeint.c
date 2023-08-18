#include "lists.h"

/**
 * dlistint_len - funcation that print linked list
 * @h:linked list node
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
