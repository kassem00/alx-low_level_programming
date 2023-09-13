#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: Nothing, just print inside
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned int i;
	char *spr = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("%s\'%s\': \'%s\'", spr, temp->key,
				       temp->value);
				spr = ", ";
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
