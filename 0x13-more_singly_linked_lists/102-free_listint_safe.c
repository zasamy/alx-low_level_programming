#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to  pointer to head of linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *temp, *head;
	size_t i, j;

	if (h == NULL || *h == NULL)
		return (0);
	node = *h;
	head = *h;
	i = 0;

	while (head != NULL)
	{
		temp = *h;
		for (i = 0; i < j; i++)
		{
			if (temp == node)
			{
				*h = NULL;
				return (j);
			}
			temp = temp->next;
		}
		node = head->next;
		free(head);
		head = node;
		j++;
	}
	*h = NULL;
	return (j);
}


