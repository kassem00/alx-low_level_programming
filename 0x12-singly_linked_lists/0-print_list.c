#include "main.h"
/**
 * print_list - Print function
 * @h: input .
 * Return: size_t.
 */
size_t print_list(const list_t *h)
{
size_t num_nodes = 0;
while (head != NULL)
{
if (head->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", head->len, head->str);
}
head = head->next;
num_nodes++;
}
return num_nodes;
}
