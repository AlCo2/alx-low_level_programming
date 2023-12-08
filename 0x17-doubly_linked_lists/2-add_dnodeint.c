#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add to the start of doubly linked_list
 *
 * @head: linked_list
 * @n: value
 *
 * Return: new Element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}
	temp->prev = new_node;
	new_node->next = temp;
	*head = new_node;
	return (new_node);
}
