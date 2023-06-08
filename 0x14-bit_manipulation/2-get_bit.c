#include "main.h"

/**
 * get_bit - eturns the value of a bit at a given index
 * @n: the number to index
 * @index: the bit to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index >= sizeof(n) * 8)
		return (-1);
	temp = n >> index;
	return (temp & 1);
}
