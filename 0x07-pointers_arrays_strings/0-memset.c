#include"main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: pointer to the block of memory file
 * @b: value to be set
 * @n: the number of bytes to be set to the value
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j;

	for (j = n; j > 0; j--)
	{
		for (i = 0; i < j; i++)
			s[i] = b;
	}
	return (s);
}
