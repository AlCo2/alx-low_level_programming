#include <stdio.h>
#include "lists.h"

/**
 * sum_lisint - function that sum all the val in list
 *
 * @head: linked list head
 *
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
