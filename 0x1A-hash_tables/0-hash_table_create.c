#include "hash_tables.h"
/**
 *hash_table_create:-creat a hash table
 *@size:-long hash table
 * Return: Null or hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *has;

	if (size == 0)
		return (NULL);

	has = malloc(sizeof(hash_table_t));

	if (!has)
		return (NULL);
	has->size = size;
	has->array = malloc(sizeof(hash_node_t *) * size);

	if (has->array == NULL)
	{
		free(has);
		return (NULL);
	}

	return (has);
}
