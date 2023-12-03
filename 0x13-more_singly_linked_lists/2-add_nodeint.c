#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that add to a linked list
 *
 * @head: head of the linked list
 * @n: value
 *
 * Return: address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
