#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - funtion to free doubly linked list
 *
 * @head: doubly linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;	
		}
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
