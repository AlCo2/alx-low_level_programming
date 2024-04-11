#include "search_algos.h"
/**
 * linear_search - search algorithm
 *
 * @array: the array to search
 * @size: size of the array
 * @value: value searched
 *
 * Return: index of the value in the array
*/
int linear_search(int *array, size_t size, int value)
{
	int index;
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = (int)i;
			return (index);
		}
	}
	return (-1);
}
