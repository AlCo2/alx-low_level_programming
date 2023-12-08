#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - add to the index of doubly linked_list
 *
 * @h: linked_list
 * @idx: index
 * @n: val
 *
 * Return: new Element
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	dlistint_t *save;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (temp != NULL)
	{
		while (temp->prev != NULL)
		{
			temp = temp->prev;
		}
	}
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (temp->next != NULL && count != idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (count < idx - 1)
		return (NULL);
	save = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = save;
	return (new_node);
}
