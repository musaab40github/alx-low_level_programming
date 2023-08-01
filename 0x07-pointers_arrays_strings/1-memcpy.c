#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of iteration
 * Return: 1
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
