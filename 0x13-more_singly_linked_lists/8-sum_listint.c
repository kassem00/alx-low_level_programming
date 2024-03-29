#include "lists.h"
/**
 * sum_listint - calculates the sum of all the
 * data in a listint_t list
 * @head: pointer to the first element in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp;
if (!head)
return (0);
temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
