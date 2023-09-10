#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key value
 * @value: value to store
 * Return: int value.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, si;
	hash_node_t *temp;

	si = ht->size;
	if(key != NULL || ht != NULL)
	{
	index = key_index((const unsigned char *)key, si);
	if(ht->array[index] == NULL)
	return (0);
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
        temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
	}
	else
		return (0);
}
