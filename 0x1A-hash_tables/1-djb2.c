#include "hash_tables.h"
/**
 * hash_djb2 - function to implements hash
 *
 * @str: the word before hash
 *
 * Return: the size
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned int hash = 5318;
	int c;

	while ((c = *str++))
		hash = hash * 33 + c;
	return hash;
}

