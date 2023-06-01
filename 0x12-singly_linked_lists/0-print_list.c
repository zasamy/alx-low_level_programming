#include "lists.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int count;

	if (!s)
		return (0);
	for (count = 0; *s != '\0'; s++)
		++count;
	return (count);
}

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: pointer to the first node
 *
 * Return: number of nudes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str), h->str);
		h = h->next;
		i++;
	}
	return (i);
}


