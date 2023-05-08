#include"main.h"

/**
 * *_strchr - locates a character in a string.
 *
 * @s: the string to be scanned
 * @c: the character to be searched in s
 *
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int i, j, l;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = i;
	}
	for (j = 0; j < l+1; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return ('\0');
}
