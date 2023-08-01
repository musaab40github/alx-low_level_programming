#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to the inigital segment
 * @accept: pointer to the matcher
 * Return: 1
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
