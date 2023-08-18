#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at index
 * @h: pointer to node
 * @idx: index
 * @n: int data
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *tempcount = *h, *temp2;
	dlistint_t *new;
	unsigned int cont = 0;

	if (*h == NULL)
		return (NULL);
	while (tempcount != NULL)
		tempcount = tempcount->next, cont++;
	if (idx > cont)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL, new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (cont = 0; cont < idx; cont++)
		temp2 = temp, temp = temp->next;
	new->next = temp;
	new->prev = temp2;
	temp2->next = new;
	if (temp)
		temp->prev = new;
	return (new);
}
