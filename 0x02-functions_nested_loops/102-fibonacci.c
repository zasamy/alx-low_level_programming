#include"main.h"

/**
 * main - Entry point
 *
 * Description: pri prints the first 50 Fibonacci numbers,
 *starting with 1 and 2, followed by a new line.
 *
 *Return: Always 0 (success)
*/

int main(void)
{
	int n;
		unsigned long i = 0, j = 1, sum;

		for (n = 0; n < 50; n++)
		{
			sum = i + j;
			printf("%lu", sum);

			i = j;
			j = sum;

			if (n == 49)
				printf("\n");
			else
				printf(", ");
		}
		return (0);
}
