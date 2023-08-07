#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints its name, followed by a new line
 * @argc: counter
 * @argv: pointer to the string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int c;
			char *btr;

			btr = argv[i];
			for (c = 0; btr[c] != '\0'; c++)
			{
				if (btr[c] < 48 || btr[c] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
