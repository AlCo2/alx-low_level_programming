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
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t) * size);
	if (hashTable->array == NULL)
		return (NULL);
	return (hashTable);
}