#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	xor = n ^ m;
	count = 0;
	while (xor)
	{
		if (xor & 1ul)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
