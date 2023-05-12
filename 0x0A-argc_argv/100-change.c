#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number
 * of coins to make change for an amount of money
 *
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int mincash, count;

	count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	mincash = atoi(argv[1]);
	if (mincash <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (count = 0; mincash > 0; count++)
	{
		if (mincash >= 25)
			mincash = mincash - 25;
		else if (mincash >= 10 && mincash < 25)
			mincash = mincash - 10;
		else if (mincash >= 5 && mincash < 10)
			mincash = mincash - 5;
		else if (mincash >= 2 && mincash < 5)
			mincash = mincash - 2;
		else
			mincash = mincash - 1;
	}
	printf("%d\n", count);
	return (0);
}
