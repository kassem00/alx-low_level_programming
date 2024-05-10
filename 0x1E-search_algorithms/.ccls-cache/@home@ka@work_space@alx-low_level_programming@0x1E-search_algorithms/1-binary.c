#include "search_algos.h"
#define N 0
#define SM -1
#define BIG  1
/**
 * binary_search - fun fact it's binary_search functionn
 * @array: pointer to first element in array
 * @size: array size
 * @value: element to found in array
 * Return: -1 on error else the index it found the number in it
 */

int binary_search(int *array, size_t size, int value)
{
	static int mid = 0, i, j = -1;

	if (j == -1)
		j = size;
	if (i > j)
		return (-1);

	if (array == NULL)
		return (-1);

	get_mid(array, &mid, &j, &i, N);
	if ( value > array[mid] )
	{
		get_mid(array, &mid, &j, &i, BIG);
		binary_search(array, size, value);
	}
	if ( value < array[mid] )
	{
		get_mid(array, &mid, &j, &i, SM);
		binary_search(array, size, value);
	}

	if ( value == array[mid] )
	{
		return (mid);
	}

	return (-1);
}


void get_mid(int *array, int  *mid, int *j, int *i, char be)
{
	int k;
	switch (be){
	case N:
		*mid = (*i + *j) / 2;
		break;
	case SM:
		*j = *mid - 1;
		*mid = (*i + *j) / 2;
		break;
	case BIG:
		*i = *mid + 1;
		*mid = (*i + *j) / 2;
		break;
	default :
		return ;
	}

	printf("Searching in array: ");
	for (k = *i; k < *j -1; k++)
	{
		printf("%d, ", array[k]);
	}
	printf("%d\n", array[k]);
}

/** [ Psudocode ]   
 * [4|8|10|12|18|20|31|32|40|45|55|85|87]
 *  ^		        ^              ^
 *  i		       mid	       j
 * binary_search(int value)
 * 
 * if not int or array first element == NULL{
 *	 print damm error
 *}
 * get_new_mid(mid =abslot([i + j] / 2))
 * value > arr[mid]{
 *	i = mid + 1
 *	get_new_mid()
 * }
 *
 * value < arr[mid]{
 *	j = mid -1
 * 	get_new_mid()
 * }
 * value ==  mid return;
 *
 *
 * 
 *
 *
 **/
