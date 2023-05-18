#include "main.h"
#include<stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: size to take from s2 to concatenate
 *
 * Return: pointer to a new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1_length, s2_length, T;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	if (n >= s2_length)
		T = s1_length + s2_length;
	else
		T = s1_length + n;
	ptr = malloc(T + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0, j = 0;
	while (s1[i] != '\0')
		ptr[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0' && n-- != 0)
		ptr[j++] = s2[i++];
	ptr[j] = '\0';
	return (ptr);
}

