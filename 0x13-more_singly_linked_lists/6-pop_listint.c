#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that pop the head of l_k
 *
 * @head: head of the linked list
 *
 * Return: value of the poped node
*/
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head)
	{
		value = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (value);
	}
	return (0);
}
