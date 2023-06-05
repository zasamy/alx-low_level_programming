#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to pointer of first element of list
 * @n: value of new node
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_element)
		return (NULL);
	new_element->next = NULL;
	new_element->n = n;
	if (!*head)
		*head = new_element;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_element;
	}
	return (new_element);
}
