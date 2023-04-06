#include "lists.h"
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *slow_ptr = head, *fast_ptr = head;
if (head == NULL || head->next == NULL)
return (0);

while (fast_ptr && fast_ptr->next)
{
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next->next;
if (slow_ptr == fast_ptr)
{
size_t count = 1;
while (slow_ptr->next != fast_ptr)
{
slow_ptr = slow_ptr->next;
count++;
}
return count;
}
}
return 0;
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t node_count = 0;
size_t looped_list_len = looped_listint_len(head);
if (looped_list_len == 0)
{
while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
node_count++;
}
}
else
{
while (looped_list_len--)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
node_count++;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (node_count);
}
