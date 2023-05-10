#include "main.h"

/**
 * square - find square root
 *
 * @n: number intger to finf square root
 * @val: square root
 * Return: square
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - caculate the natural square root of a number
 *
 * @n: given number
 * @val: square root
 *
 * Return: the natural square root of given number.
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

