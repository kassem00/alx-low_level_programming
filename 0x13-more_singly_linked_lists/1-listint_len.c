#include "lists.h"
/**
 * listint_len - prints linked list.
 * @h: pointer .
 * Return: size_t.
 */
size_t listint_len(const listint_t *h)
{
size_t num_nodes = 0;
while (h)
{
h = h->next;
num_nodes++;
}
return (num_nodes);
}
