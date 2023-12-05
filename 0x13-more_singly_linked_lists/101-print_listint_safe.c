#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - function that print value in a linkedlist
 *
 * @head: linked list
 *
 * Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	if(head == NULL)
		exit(98);
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
