#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that print value in a linkedlist
 *
 * @h: linked list
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
