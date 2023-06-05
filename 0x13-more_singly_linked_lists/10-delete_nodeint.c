#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to pointer of first elemnt of list
 * @index: index of node to be deleted
 * Return: 1 if successful, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			prev_node->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		prev_node = temp;
		temp = temp->next;
	}
	return (-1);
}
