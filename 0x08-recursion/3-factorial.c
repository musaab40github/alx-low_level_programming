#include "main.h"

/**
 * factorial - function that returns the factorial
 * of a given number
 * @n: variable for the number
 * Return: 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (factorial * factorial(n - 1));
}
