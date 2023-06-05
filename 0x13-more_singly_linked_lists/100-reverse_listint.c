#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer of first list element
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *node;

	temp = NULL;
	node = NULL;
	while (*head != NULL)
	{
		node = *head;
		*head = (*head)->next;
		node->next = temp;
		temp = node;
	}
	*head = node;
	return (*head);
}

