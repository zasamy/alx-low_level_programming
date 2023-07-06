#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: string with binary num
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		conv = conv * 2 + (*b++ - '0');
	}
	return (conv);
}
