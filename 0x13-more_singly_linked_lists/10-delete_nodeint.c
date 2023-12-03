#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete index
 *
 * @head: linked list
 * @index: index to delete
 *
 * Return: 1 on success, -1 on failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *node;

	if(*head == NULL)
		return -1;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	while (temp->next != NULL && i != index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (i != index - 1)
	{
		return (-1);
	}
	node = temp->next->next;
	free(temp->next);
	temp->next = node;
	return (1);
}
