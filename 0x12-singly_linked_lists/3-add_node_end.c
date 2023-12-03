#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that add to Linked_list
 *
 * @head: linked list head
 * @str: sting value
 *
 * Return: address of new Node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		return (new_node);
	}
}
