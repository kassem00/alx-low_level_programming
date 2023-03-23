#include "function_pointers.h"

/**
 * array_iterator - prints a name
 * @array: name of the person
 * @size: pointer to funcation
 * @action: pointer to funcation
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(*(array + i));
}
