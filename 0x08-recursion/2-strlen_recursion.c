#include"main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: int lentgth
 *
 */

int _strlen_recursion(char *s)
{
	int lentgh = 0;

	if (*s > '\0')
	{
		lentgh += _strlen_recursion(s + 1) + 1;
	}
	return (lentgh);
}
