#include "lists.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string input
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;
	return (count);
}

/**
 * add_node - adds a new node at the beginning of a linked list
 *
 * @head: a pointer to the head of the structure list_t list
 * @str: string to be added to the structure list_t list
 *
 * Return: address of new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element = malloc(sizeof(list_t));

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
	new_element->next = *head;
	*head = new_element;
	return (new_element);
}
