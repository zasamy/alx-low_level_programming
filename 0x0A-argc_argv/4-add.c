#include <stdlib.h>
#include <stdio.h>

/**
 * main -  adds positive numbers.
 *
 * @argc: number of command line argument
 * @argv: pointer to an array of command line argument
 *
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int sum = 0;
	char *c;

	if (argc > 1)
	{
		while (--argc)
		{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
