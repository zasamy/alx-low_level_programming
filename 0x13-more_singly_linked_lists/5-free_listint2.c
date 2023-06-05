#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to pointer of first element of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (!head)
		return;

	while (*head)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
	*head = NULL;
}
