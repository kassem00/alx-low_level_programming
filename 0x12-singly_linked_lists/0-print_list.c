#include "lists.h"
/*
 * print_list - Print function.
 * @h: input .
 * Return: size_t.
 */

size_t print_list(const list_t *h)
{
size_t num_nodes = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
num_nodes++;
}
return num_nodes;
}
