#include"main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
