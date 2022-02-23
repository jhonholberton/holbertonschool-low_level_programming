#include "hash_tables.h"
/**
 *hash_table_print:-print a hash table
 *@ht:-is the hash table you want to add or update the key/value to
 * Return: value or Null
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, val = 0;
	hash_node_t *tmp;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];

		while (tmp)
		{
			if (val == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			val = 1;
		}
	}
	printf("}");
	printf("\n");
}
