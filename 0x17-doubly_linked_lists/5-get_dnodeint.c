#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function to get node at index
 *
 * @head: doubly linked list
 * @index: nth child
 *
 * Return: The node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	while (head != NULL && count != index)
	{
		head = head->next;
		count++;
	}
	if (count < index)
		return (NULL);
	return (head);
}
