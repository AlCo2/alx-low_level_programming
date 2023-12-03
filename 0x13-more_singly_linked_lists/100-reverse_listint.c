#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - function to reverse linked_list
 *
 * @head: linked_list
 *
 * Return: pointer to new linked_list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}
