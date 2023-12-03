#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that return nth node
 *
 * @head: linked list head
 * @index: index of node to return
 *
 * Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
