#include "lists.h"

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
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
