#include "hash_tables.h"
/**
 *hash_table_get:-get a hash table
 *@ht:-is the hash table you want to add or update the key/value to
 *@key:-is the key
 * Return: value or Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key || !ht->array)
		return (NULL);
	if (strcmp(key, "") == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	if (!ht->array[index])
		return (NULL);

	return (ht->array[index]->value);
}
