#include"main.h"
#include <stdlib.h>

/**
 * get_num_words - get the number of space separated words in a string
 *
 * @s: string
 *
 * Return: number of words in s
 *
 */

int get_num_words(char *s)
{
	int i = 0, nwords = 0;

	while (s[i])
	{
		while (s[i] && s[i] == ' ')
			++i;
		if (s[i] == '\0')
			break;
		while (s[i] && s[i] != ' ')
			++i;
		++nwords;
	}
		return (nwords);
}

/**
 * strtow - splits a string into words
 *
 * @str: string of space-separated words
 *
 * Return: pointer to array of strings, or NULL on failure
 */

char **strtow(char *str)
{
	int i, j, k, nwords, begin, end;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	nwords = get_num_words(str);
	if (nwords == 0)
		return (NULL);
	++nwords;
	ptr = (char **) malloc(nwords * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			++i;
		if (str[i] == '\0')
			break;
		begin = i;
		while (str[i] && str[i] != ' ')
			++i;
		end = i;
		ptr[j] = (char *) malloc((end - begin + 1) * sizeof(char));
		if (ptr[j] == NULL)
		{

			free(ptr[j]);
			while (j)
				free(ptr[--j]);
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < (end - begin); ++k)
			ptr[j][k] = str[begin + k];
		ptr[j++][k] = '\0';
	}
	ptr[j] = NULL;
	return (ptr);
}


