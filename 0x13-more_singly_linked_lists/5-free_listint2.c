#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to the head node of the list
 * Return: and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
listint_t *next;
listint_t *current = *head;
while (current != NULL && head != NULL)
{
next = current;
current = current->next;
free(next);
}
*head = NULL;
}
