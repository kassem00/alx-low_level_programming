#include "lists.h"

/**
 * reverse_listint - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * Return: listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
while (current != NULL)
{
listint_t *next = current->next;
current->next = prev;
prev = current;
current = next;
}
*head = prev;
return (prev);
}
