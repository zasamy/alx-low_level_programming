#include"main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
