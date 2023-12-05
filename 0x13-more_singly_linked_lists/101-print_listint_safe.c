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
	const listint_t *temp = head->next;

	while (head != NULL && temp->next != NULL)
	{
		printf("%d\n", head->n);
		if (head == temp)
			exit(98);
		head = head->next;
		temp = temp->next->next;
		count++;
	}
	return (count);
}
