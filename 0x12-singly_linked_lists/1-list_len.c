#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the first node
 *
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

		while (h != NULL)
		{
			h = h->next;
			element++;
		}
	return (element);
}

