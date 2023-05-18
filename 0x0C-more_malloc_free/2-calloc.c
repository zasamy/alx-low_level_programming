#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: array length
 * @size: size of each element
 *
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);

	while (i < (nmemb * size))
		ptr[i++] = 0;
	return (ptr);
}
