#include "main.h"

/**
 * argstostr - conacatenates arguments of a function
 * @ac: arg counts
 * @av: arg vector
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int counter = 0;
	char *output;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			counter++;
		counter++;
	}
	output = malloc(sizeof(char) * count + 1);
	if (output == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			output[k] = av[i][j];
			k++
		}
		output[k++] = '\n';
	}
	ouput[k] = '\0';
	return (output);
}
