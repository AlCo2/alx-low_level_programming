#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum value of doubly linked list
 *
 * @head: doubly linked list
 *
 * Return: The sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
