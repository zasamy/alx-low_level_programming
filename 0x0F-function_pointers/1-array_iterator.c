#include "function_pointers.h"

/**
 * array_iterator - that executes a function given
 * as a parameter on each element of an array
 *
 * @array: array of integer
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
