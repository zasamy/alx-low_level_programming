#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: head ofthe linke dlist
 * Return: number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
size_t numberofnodes = 0;
const listint_t *current = h;

while (current != NULL)
{
printf("%d\n", current->n);
numberofnodes += 1;
current = current->next;
}
return (numberofnodes);
}
