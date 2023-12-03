#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert in a position
 *
 * @head: linked list
 * @idx: new node place
 * @n: new Node value
 *
 * Return:
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *old_node;
	unsigned int i = 0;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (i > idx-1)
		return (NULL);
	if (i ==0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		old_node = temp->next;
		temp->next = new_node;
		new_node->next = old_node;
	}
	return (new_node);
}
