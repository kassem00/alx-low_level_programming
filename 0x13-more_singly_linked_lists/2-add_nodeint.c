#include "lists.h"
/**
 * listint_len - prints linked list.
 * @h: pointer .
 * Return: size_t.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if(new_node == NULL)
return (NULL);
else
{
new_node->n  = n;
new_node->next = (*head);
(*head) = new_node;
}
return (new_node);
}