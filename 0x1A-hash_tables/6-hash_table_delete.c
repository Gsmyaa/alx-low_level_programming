#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: the hash table
 *Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp2;
	unsigned int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			tmp2 = tmp;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
			tmp = tmp->next;
		}
	}
	free(ht->array);
	free(ht);
}
