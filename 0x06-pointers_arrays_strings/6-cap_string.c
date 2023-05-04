#include"main.h"
#include <stdio.h>

/**
 * ISlower - determines whether ascii is lowercase
 * @c: character
 * Return: 1  if true, 0 if false
*/

int ISlower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - determine whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
*/

int isdelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 * @str: input string
 * Return: string with capitalized words
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int founddl = 1;

	while (*str)
	{
		if (isdelimiter(*str))
			founddl = 1;
		else if (ISlower(*str) && founddl)
		{
			*str -= 32;
			founddl = 0;
		}
		else
			founddl = 0;
		str++;
	}
	return (ptr);
}
