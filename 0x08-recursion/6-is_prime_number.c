#include "main.h"

/**
 * is_prime_number - Check Whether a Number is Prime or Not
 *
 * @n: given number to be chcked
 * @m: integer number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int check_prime(int n, int m);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check numbers < n devise n or not
 *
 * @n: number to be checked
 * @m: integer number
 *
 * Return: 1 prime or 0 otherwise
 */

int check_prime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, m + 1));
}
