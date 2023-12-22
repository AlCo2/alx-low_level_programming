#include "hash_tables.h"
/**
 * hash_table_set - function to set value for key in hashtable
 *
 * @ht: the HashTable
 * @key: the key
 * @value: value to map with key
 *
 * Return: 1 in success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item;
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *temp = ht->array[index];

	if (*key == '\0' || !key || !value || !ht)
		return (0);
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (0);
	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		return (0);
	}
	new_item->value = strdup(value);
	if (new_item->value == NULL)
	{
		free(new_item->key);
		free(new_item);
		return (0);
	}
	new_item->next = ht->array[index];
	ht->array[index] = new_item;

	return (1);
}

