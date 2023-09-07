#include "hash_tables.h"
/**
 * hash_table_create - creat hash table
 * @size : size of hash taple
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p = malloc(sizeof(hash_table_t));
	hash_node_t *t_head = malloc(sizeof(hash_node_t));
	int i;

	p->size = size;
	for (i = 0; i < (int)size; i++)
	{
		t_head = t_head->next;
		t_head = malloc(sizeof(hash_node_t));
	}
	t_head->next = NULL;
	return (p);
}
