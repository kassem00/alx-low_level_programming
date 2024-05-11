#include "search_algos.h"
#define N 0
#define SM -1
#define BIG  1

/**
 * binary_search - Searches for a value in a sorted array.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	static int i = 0, j = -1, mid = 0, first_call = 1;
	int k = 0;

	if (first_call)
	{
		i = 0;
		j = size - 1;
		first_call = 0;
	}

	if (i > j || array == NULL)
	{
		first_call = 1;
		return (-1);
	}
	printf("Searching in array: ");
	for (k = i; k <= j; k++)
	{
		printf("%d", array[k]);
		if (k < j)
		{
			printf(", ");
		}
	}
	printf("\n");
	mid = (i + j) / 2;
	if (value == array[mid])
	{
		first_call = 1;
		return (mid);
	}
	else if (value < array[mid])
	{
		j = mid - 1;
	}
	else
	{
		i = mid + 1;
	}
	return (binary_search(array, size, value));
}
