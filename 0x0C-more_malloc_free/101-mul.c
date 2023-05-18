#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _puts - print a string
 *
 * @str: pointer to the string to print
 *
 * Return: 0
 *
*/

int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}

/**
 * _atoi - converts a string of ascii digits to the values
 *
 * @s: pointer to the source string
 *
 * Return: integer converted
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int result = 0, firstnum, i;

	for (firstnum = 0; !(s[firstnum] >= 48 && s[firstnum] <= 57); firstnum++)
	{
		if (s[firstnum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = firstnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		result *= 10;
		result += (s[i] - 48);
	}
	return (sign * result);
}
/**
 * print_int - print an integer
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, result;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		result = n / divisor;
		_putchar('0' + result);
	}
}
/**
 * main - print the result of multiplication
 * @argc: argument count
 * @argv: array of argment
 * Return: 0 (success)
 *
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
			_putchar('\n');
			return (0);
}
