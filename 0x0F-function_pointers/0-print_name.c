#include "function_pointers.h"

/**
 * print_name - function that print the name
 * @name: string name
 * @f: pointer to printing function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
