#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
  * hash_table_get - Retrieves a value associated with a key(Read part of table)
  * @ht: The hash table to look into
  * @key: The key to finding
  *
  * Return: The value associated with the space
  * or NULL if key couldn't be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *space = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	space = ht->array[idx];

	if (space == NULL)
		return (NULL);

	while (strcmp(key, space->key) != 0)
		space = space->next;

	return (space->value);
}
