#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: Nothing, just print inside
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp_temp;
	unsigned int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{

		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				temp_temp = temp;
				temp = temp->next;
				free(temp_temp->key);
				free(temp_temp->value);
				free(temp_temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
