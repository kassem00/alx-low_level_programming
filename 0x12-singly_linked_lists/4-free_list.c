#include "lists.h"
/**
 * add_node - adds a new node .
 * @head: pointer to point to pointer.
 * Return: void;
 */
void free_list(list_t *head)
{
list_t *temp_list;
while (head)
{
temp_list = head->next;
free(head->str);
free(head);
head = temp_list;
}
}
