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

	if (array && size && action)
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}

}
