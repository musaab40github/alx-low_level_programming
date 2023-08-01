#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the string
 * @c: placeholder to the search letter
 * Return: 1
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
		s++;
	}
}
