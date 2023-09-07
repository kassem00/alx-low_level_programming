#include "hash_tables.h"
/**
 * hash_table_create - creat hash table
 * @size : size of hash taple
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p = malloc(sizeof(hash_table_t));
	hash_node_t *t_head = malloc(sizeof(hash_node));
	int i;

	p->size = 1024;
	for (i = 0; i < SIZE_OF_TABLE; i++)
	{
		t_head = t_head->next;
		t_head->next = malloc(sizeof(hash_node));
	}
	return (p)
}
