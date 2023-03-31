#include "lists.h"

/**
 * list_len - funcation return number of elements.
 * @h: pointer.
 * Return: size_t.
 */
size_t list_len(const list_t *h)
{
size_t num_nodes = 0;
for (; h != NULL; num_nodes++)
{
h = h->next;
}
return (num_nodes);
}
