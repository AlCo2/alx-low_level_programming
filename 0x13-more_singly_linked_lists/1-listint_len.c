#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that return len of linked list
 *
 * @h: linked list
 *
 * Return: len of linked list
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
