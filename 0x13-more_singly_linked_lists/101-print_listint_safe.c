#include "lists.h"

/**
 * _reallocate - reallocates memory for an array of pointers
 * to a node in a linked list
 * @list: the liste to append
 * @size: size of the new list
 * @new: new node to add to the new list
 * Return: pointer to the new list
 */

const listint_t **_reallocate(const listint_t **list,
		size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}


/**
 * print_listint_safe - prints a linked list
 * @head: the head of the linked list
 * Return: number of nodes in list. If fails, exit with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _reallocate(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
