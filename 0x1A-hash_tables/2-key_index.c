#include "hash_tables.h"

/**
 * key_index - function to return index of key
 *
 * @key: the key
 * @size: the array size
 *
 * Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	(void)size;
	index = hash_djb2(key);
	return (index % size);
}
