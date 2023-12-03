#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function to free linkedlist
 *
 * @head: head of linked list
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
