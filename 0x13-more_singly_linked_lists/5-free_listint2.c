#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to the head node of the list
 * Return: and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
if (head == NULL)
return;
while (*head != NULL) {
listint_t *next = (*head)->next;
free(*head);
*head = next;
}
*head = NULL;
}
