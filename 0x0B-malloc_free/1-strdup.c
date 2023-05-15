#include"main.h"
#include<stdlib.h>

/**
 * _strdup - duplicates a string
 *
 * @str: string to duplicate
 * Return:  pointer to the duplicated string
 * NULL f insufficient memory was available
 *
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	ptr = malloc(size * sizeof(*str) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = str[i];
	}
	return (ptr);
}
