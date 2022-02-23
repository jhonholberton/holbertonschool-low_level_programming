#include "hash_tables.h"
/**
 * hash_table_delete:- free hash table
 *
 * @ht:-hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *node = NULL;
	unsigned long int index = 0;

	if (!ht || !ht->array || ht->size == 0)
		return;
	while (index < ht->size)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			node = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = node;
		}
		index++;
	}
	free(tmp);
	free(node);
	free(ht->array);
	free(ht);
}
