#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_create - how to create the hashtable_obj_info obj
  * @size: Size of the array
  *
  * Return: hash table instance obj
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *htable_obj = NULL;
	hash_node_t **arr = NULL;

	htable_obj = malloc(sizeof(hash_table_t));
	if (htable_obj == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (; i < size; ++i)
		arr[i] = NULL;

	htable_obj->size = size;
	htable_obj->array = arr;

	return (htable_obj);
}
