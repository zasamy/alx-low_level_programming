#include "main.h"

/**
 * _pow_recursion - calculate the value of x raised to the power of y
 *
 * @x: is the base number
 * @y: is the exponent
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
