#include "lists.h"

/**
 * free_list - free a linked list
 *
 * @head: pointer to head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
		return;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
