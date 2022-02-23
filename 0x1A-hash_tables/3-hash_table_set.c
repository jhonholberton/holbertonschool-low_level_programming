#include "hash_tables.h"
/**
 *hash_table_set:-creat a hash table
 *@ht:-is the hash table you want to add or update the key/value to
 *@key:-is the key
 *@value:-is the value associated with the key
 * Return: 1 full or 0 error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (!ht || !key || strcmp(key, "") == 0 || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value != NULL)
				return (1);
			return (0);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	if (new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
