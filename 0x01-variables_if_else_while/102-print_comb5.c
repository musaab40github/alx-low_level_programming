#include <stdio.h>

/**
 * main - print number
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');

		if (i % 50 == 49)
			putchar('\n');
	}
	return (0);
}
