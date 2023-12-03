#include <stdio.h>
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

	if (*head)
	{
		value = (*head)->n;
		*head = (*head)->next;
		return (value);
	}
	return (0);
}
