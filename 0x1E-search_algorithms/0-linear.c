#include "search_algos.h"

/**
 * linear_search - linear search function
 * @array: pointer to first element in array
 * @size: array size
 * @value: element to found in array
 * Return: -1 on error else number found
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (ERROR);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (value);
	}
	return (ERROR);
}
