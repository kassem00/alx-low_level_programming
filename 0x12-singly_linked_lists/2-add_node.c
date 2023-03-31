#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node .
 * @head: pointer to point to pointer.
 * @str: new string to add in the node.
 * Return: pointer list_t;
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n_node;
unsigned int in_length = 0;
while (*(str + in_length))
in_length++;
n_node = malloc(sizeof(list_t));
if (!n_node)
return (NULL);
n_node->str = strdup(str);
n_node->in_length = in_length;
n_node->next = (*head);
(*head) = n_node;
return (*head);
}
