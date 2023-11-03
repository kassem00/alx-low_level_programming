#include "hash_tables.h"
/**
 * hash_table_create - creat hash table
 * @size: size of hash taple
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;
	unsigned long int i;

	p = malloc(sizeof(hash_table_t));
	if (p == NULL)
		return (NULL);

	p->size = size;
	p->array = malloc(size * sizeof(hash_node_t *));
	if (p->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p->array[i] = NULL;
	}
	return (p);
}
