#include "lists.h"

size_t print_list(const list_t *h){
	size_t i = 0;
	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	return i;
}
