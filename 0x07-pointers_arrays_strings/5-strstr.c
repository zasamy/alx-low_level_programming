#include"main.h"

/**
 * compare - compares two strings character by character.
 *
 * @x: first string to compare
 * @y: seconde string to compare
 *
 * Return: 0 (success)
 */

int compare(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
		{
			return (0);
		}
		x++;
		y++;
	}
	return (*y == '\0');
}


/**
 * *_strstr - locates a substring.
 *
 * @haystack: string to be scanned
 * @needle: string to be searched in haystack string
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
