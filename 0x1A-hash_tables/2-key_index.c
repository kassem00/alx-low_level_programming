#include "hash_tables.h"
/**
 * key_index - function give index of key
 * @size: size of hash taple
 * @key: size of hash taple
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
