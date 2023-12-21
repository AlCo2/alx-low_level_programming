#include "hash_tables.h"

/**
 * hash_table_create - function to create HashTable
 *
 * @size: HashTable size
 *
 * Return: HashTable
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = malloc(sizeof(hash_table_t));
	int i = 0;

	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (hashTable->array == NULL)
		return (NULL);
	while (i < size)
	{
		hashTable->array[i] = NULL;
		i++;
	}
	return (hashTable);
}

