#include "main.h"

/**
 * _abs - omputes the absolute value of an integer
 *
 * @n: takes integer type input for function
 *
 * Return: absolute value
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
