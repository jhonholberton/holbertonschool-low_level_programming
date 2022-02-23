#include "hash_tables.h"
/**
 *key_index:-index hash table
 *@key:- key change
 *@size:-long hash table
 * Return: string changing
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_key;

	if (!key || size == 0)
		return (-1);
	new_key = hash_djb2(key);

	return (new_key % size);
}
