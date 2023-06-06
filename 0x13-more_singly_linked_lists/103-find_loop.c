#include "lists.h"

/**
 * find_listint_loop - the loop in a linked list
 * @head: points to beginning of list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (node = head; node != end; node = node->next)
			if (node == end->next)
				return (end->next);
	}
	return (NULL);
}
