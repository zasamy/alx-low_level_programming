#include"main.h"

/**
 * compare - compares two strings character by character.
 *
 * @X: first string to compare
 * @Y: seconde string to compare
 *
 * Return: 0 (success)
 */

int compare(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
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
	return (NULL);
}
