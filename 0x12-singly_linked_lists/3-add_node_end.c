#include "lists.h"
/**
 * add_node_end - adds a last node .
 * @head: pointer to point to pointer.
 * @str: n_node string to add in the node.
 * Return: pointer list_t;
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *n_node;
list_t *temp = *head;
unsigned int len = 0;
while (*(str + len))
len++;
n_node = malloc(sizeof(list_t));
if (n_node == NULL)
return (NULL);
n_node->str = strdup(str);
n_node->len = len;
n_node->next = NULL;
if (*head == NULL)
{
*head = n_node;
return (n_node);
}
while (temp->next)
temp = temp->next;
temp->next = n_node;
return (n_node);
}
