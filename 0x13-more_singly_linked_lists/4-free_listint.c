#include "lists.h"
11;rgb:0000/0000/0000
/**
 * free_listint - frees a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
