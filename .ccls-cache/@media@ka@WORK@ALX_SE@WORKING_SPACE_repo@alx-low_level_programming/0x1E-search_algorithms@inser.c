/*
 * insertion_sort - fun fact it's insertion sort functionn
 * @array: pointer to first element in array
 * @size: array size
 * Return: -1 on error else
 */
void insertion_sort(int *array, size_t size)
{
	int key, j, i, z;
        for (i = 1; i < (int)size; i++)
	{
		key = array[i];
		j = i - 1;

                while (j >= 0 && array[j])
		{
			array[j + 1] = array[j];
			j = j - 1;
                }
		array[j + 1] = key;
        }
	for (z = 0; z < (int)size; z++)
		printf("index %d out = %d\n", z, array[z]);
}
