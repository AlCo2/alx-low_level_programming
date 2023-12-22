#include "hash_tables.h"
/**
 * hash_table_get - function to get value for key in hashtable
 *
 * @ht: the HashTable
 * @key: the key
 *
 * Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (*key == '\0' || !key || !ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}

