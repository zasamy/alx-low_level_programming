#include"main.h"

/**
 * main - Entry point
 *
 * Description: print the sum of even-valued Fibonacci sequence
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	unsigned long i = 0, j = 1, total_ sum;
	float  sum;

	while (1)
	{
		total_sum = i + j;
		if (total_sum > 4000000)
			break;
		if ((total_sum % 2) == 0)
			sum += total_sum;
		i = j;
		j = total_sum;
	}
	printf("%.0f\n", sum);

	return (0);
}
