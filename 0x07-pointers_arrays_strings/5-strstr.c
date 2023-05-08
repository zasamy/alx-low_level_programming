#include"main.h"

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

	for (; *haystack != '\0'; haystack++)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}
		if (*p2 != '\0')
			return (haystack);
	}

	return (0);
}

