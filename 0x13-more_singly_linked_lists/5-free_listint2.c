#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function to free linkedlist
 *
 * @head: head of linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	(*head) = NULL;
}
