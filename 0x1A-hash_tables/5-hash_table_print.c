#include "hash_tables.h"
/**
 * hash_table_print - print full hash table
 *
 * @ht: hashtable
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int j = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0;i < ht->size;i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (j != 0 )
			{
				printf(",");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			j++;

		}
	}
	printf("}\n");
}

