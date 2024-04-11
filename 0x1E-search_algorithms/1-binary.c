#include "search_algos.h"
/**
 * binary_search - search algorithm
 *
 * @array: the array to search
 * @size: size of the array
 * @value: value searched
 *
 * Return: index of the value in the array
*/
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m, i;

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r ; i++)
		{
			if (i != r)
				printf("%ld, ", i);
			else
				printf("%ld\n", i);
		}
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
