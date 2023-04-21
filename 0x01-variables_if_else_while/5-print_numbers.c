#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single diigit numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char d = 0;

	while (d <= 9)
	{
		printf("%i", d);
			d++;
	}
	printf("\n");

	return (0);
}

