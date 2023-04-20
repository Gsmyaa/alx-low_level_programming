#include "hash_tables.h"

/**
 *hash_table_create - creates hash table
 *@size: size of an array of linked list
 *Return: a pointer or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	table->size = size;
	if (table == NULL)
		return (NULL);
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
