#include"main.h"

/**
 * _sqrt - find the squart root
 *
 * @x: input number
 *
 * Return: squart root of x
*/

double _sqrt(double x)
{
	float sqrt, t;

	sqrt = x / 2;
	t = 0;
	while (sqrt != t)
	{
		t = sqrt;
		sqrt = (x / t + t) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 * prime factor of number (num)
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int pr, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (pr = 3; pr <= _sqrt(num); pr += 2)
	{
		while (num % pr == 0)
		{
			num = num / pr;
			largest = pr;
		}
	}
	if (num > 2)

		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entry point
 *
 * Description: the largest prime factor of the number 612852475143
 *
 * Return: Alwzys 0 (success)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
