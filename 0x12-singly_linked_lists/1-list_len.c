#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that return total items in linked list
 *
 * @h: linked_list
 *
 * Return: total elements
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
