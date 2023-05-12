#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
