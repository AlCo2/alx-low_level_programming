#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - return length of d linked list
 *
 * @h: doubly linked list
 *
 * Return: size
*/
size_t dlistint_len(const dlistint_t *h);
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
