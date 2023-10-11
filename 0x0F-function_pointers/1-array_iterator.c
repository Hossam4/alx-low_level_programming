#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * @array: an array of int
 * @size: siae of array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
		{
			action(*array++);
		}

}
