#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number to print as binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, print = 0;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
