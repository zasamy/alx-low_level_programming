#include"lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to first element on list
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
