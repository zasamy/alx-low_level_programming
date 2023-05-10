#include "main.h"

/**
 * move_star - iterates past asterisk
 * @s2: the string that can contain wildcard
 *
 * Return: the pointer past star
 */

char *move_star(char *s2)
{
	if (*s2 == '*')
		return (move_star(s2  + 1));
	else
		return (s2);
}

/**
 * inception - compare two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if identical, 0 if false
 */

int inception(char *s1, char *s2)
{
	int i = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		i += wildcmp(s1 + 1, s2 + 1);
	i += inception(s1 + 1, s2);
	return (i);
}

/**
 * wildcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (!*s1 && *s2 == '*' && !*move_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !*s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			i += wildcmp(s1 + 1, s2 + 1);
		i += inception(s1, s2);
		return (!!i);
	}
	return (0);
}
