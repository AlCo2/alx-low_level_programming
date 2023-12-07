#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function to print doubly linked_list
 *
 * @h: doubly linked_list
 *
 * Return: size of doublyLinkedList
*/
size_t print_dlistint(const dlistint_t *h)
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
