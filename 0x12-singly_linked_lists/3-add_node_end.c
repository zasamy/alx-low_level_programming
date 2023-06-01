#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: a pointer to the head
 * @str: string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element = malloc(sizeof(list_t));
	list_t *node = *head;

	if (head == NULL || new_element == NULL)
		return (NULL);
	if (str)
	{
		new_element->str = strdup(str);
		if (new_element->str == NULL)
		{
			free(new_element);
			return (NULL);
		}
		new_element->len = _strlen(new_element->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_element;
	}
	else
		*head = new_element;
	return (new_element);
}
