#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to the head node of the list
 *
 * Description: This function frees all the nodes in a linked list of type
 * listint_t, and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *next;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
*head = NULL;
}
