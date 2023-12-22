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
	hash_node_t *new_item = create_item(key, value);
	const unsigned char *unsigned_key = (const unsigned char *)key;
	unsigned long int index = key_index(unsigned_key, ht->size);
	hash_node_t *temp = ht->array[index];

	if (strlen(key) == 0)
		return (0);
	if (temp == NULL)
	{
		ht->array[index] = new_item;
		return (1);
	}
	else
	{
		while (temp != NULL)
		{
			if (strcmp(key, temp->key) == 0)
			{
				strcpy(temp->value, value);
				return (1);
			}
			temp = temp->next;
		}
		new_item->next = ht->array[index];
		ht->array[index] = new_item;
		return (1);
	}
	return (0);
}
/**
 * create_item - function to create items
 *
 * @key: the key
 * @value: the value
 *
 * Return: created item
*/
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);
	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
		return (NULL);
	item->value = malloc(strlen(value) + 1);
	if (item->value == NULL)
		return (NULL);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return item;
}
