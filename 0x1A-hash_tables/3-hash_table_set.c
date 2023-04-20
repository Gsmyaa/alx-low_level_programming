#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table to be added or updated
 *@key: the key, cannot be empty
 *@value: the value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;
	char *value_;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	tmp = ht->array[index];
	value_ = strdup(value);
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(new_node);
			free(ht->array[index]->value);
			ht->array[index]->value = value_;
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = ht->array[index];
	new_node->next = tmp;
	ht->array[index] = new_node;
	return (1);


}
