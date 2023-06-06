#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: the head of the linked list
 * Return: number of nodes in list. If fails, exit with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t count;
	const listint_t *temp;

	node = head;
	if (node == NULL)
		exit(98);
	count = 0;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (temp < node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (count);
}

