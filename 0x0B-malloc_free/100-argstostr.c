#include"main.h"
#include <stdlib.h>

/**
 * _length - find a length of a string
 *
 * @s: string
 * Return: int length of s
 */

int _length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: number of string
 * @av: array of string
 *
 * Return: char * to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int k = 0, lav = 0, j = 0, cmp = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; k < ac; k++, lav++)
		lav += _length(av[k]);

	str = malloc(sizeof(char) * lav + 1);
	if (str == 0)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (j = 0; av[k][j] != '\0'; j++, cmp++)
			str[cmp] = av[k][j];
		str[cmp] = '\n';
		cmp++;
	}
	str[cmp] = '\0';
	return (str);
}
