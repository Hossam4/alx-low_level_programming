#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string to copy to new memory
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int counter = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		counter++;

	copy = malloc(sizeof(char) * counter + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}
