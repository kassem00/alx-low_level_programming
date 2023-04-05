#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at end
 * the beginning of a listint_t list.
 * @head: pointer.
 * @n: data input.
 * Return: listint_t.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *last = *head;
if (new_node == NULL)
return(NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (last->next != NULL)
last = last->next;
last->next = new_node;
return (new_node);
}
