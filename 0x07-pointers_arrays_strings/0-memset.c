#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: the pointer 
 * @b: the placeholder
 * @n: the number of iteration
 * Return: 1
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; 

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
