#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to first element in a list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
