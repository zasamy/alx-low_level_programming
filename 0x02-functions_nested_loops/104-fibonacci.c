#include"main.h"

/**
 * numlength - return the length og string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int numlength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: print the first 98 Fibonacci numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n, init0;
	unsigned long i = 1, j = 2, sum, max = 100000000, i0 = 0, j0 = 0, sum0 = 0;

	for (n = 1; n <= 98; n++)
	{
		if (i0 > 0)
			printf("%lu", i0);
		init0 = numlength(max) - 1 - numlength(i);

		while (i0 > 0 && init0 > 0)
		{
			printf("%d", 0);
			init0--;
		}
		printf("%lu", i);

		sum = (i + j) % max;
		sum0 = i0 + j0 + (i + j) / max;
		i = j;
		i0 = j0;
		j = sum;
		j0 = sum0;

		if (n != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
