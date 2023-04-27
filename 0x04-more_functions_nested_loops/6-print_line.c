#include"main.h"

/**
 * print_line - that draws a straight line in the terminal
 *
 * @n: input the number of time the _ charachter should be printed
 *
 * Return: Always o (success)
*/

void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= n; l++)
			_putchar(95);
		_putchar('\n');
	}
}
