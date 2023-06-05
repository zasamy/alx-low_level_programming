#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a linked list
 * @head: pointer to pointer of first element
 * @n: value of new node
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element = malloc(sizeof(listint_t));

	if (!head || !new_element)
		return (NULL);
	new_element->next = NULL;
	new_element->n = n;
	if (*head)
		new_element->next = *head;
	*head = new_element;
	return (new_element);
}
