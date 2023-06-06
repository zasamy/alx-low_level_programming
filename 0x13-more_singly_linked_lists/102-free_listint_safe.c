#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to  pointer to head of linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *temp;
	size_t count;

	count = 0;
	node = *h;
	while (node != NULL)
	{
		count++;
		temp = node;
		node = node->next;
		free(temp);
		if (temp < node)
			break;
	}
	*h = NULL;
	return (count);
}
