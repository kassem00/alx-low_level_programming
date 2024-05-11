#include "search_algos.h"
#include <math.h>

int min(int a, int b);
int jump_search(int *array, size_t size, int value);

/**
 * min - Calculates the minimum of two integers.
 * @a: first integer
 * @b: second integer
 * Return: the smaller of a and b
 */
int min(int a, int b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted array
 * using the Jump Search algorithm.
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size); /* Block size to be jumped */
	int prev = 0;          /* Previous block index */

	if (array == NULL)
		return (-1);

	/* Jump from block to block */
	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= (int) size)
			return (-1);
	}

	printf("Value found between indexes");
	printf(" [%d] and [%d]\n", prev, min(step, size) - 1);
	/* Linear search for value in block starting with prev */
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return (-1);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}
