#include "lists.h"
/**
 * print_listint - prints linked list.
 * @h: pointer .
 * Return: size_t.
 */

size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
num_nodes++;
}
return (num_nodes);
}
