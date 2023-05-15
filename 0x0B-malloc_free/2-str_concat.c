#include "main.h"
#include <stdlib.h>

/**
 * _length - find length of a string
 *
 * @s: string
 *
 * Return: length of a string
 */

int _length(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	return (size);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: seconde string
 *
 *  Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _length(s1);
	size2 = _length(s2);
	ptr = malloc((size1 + size2) * sizeof(char) + 1);
	if (ptr == 0)
		return (0);

	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}

