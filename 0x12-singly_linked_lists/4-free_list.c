#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function to free linked_list
 *
 * @head: linked_list
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}	
}
