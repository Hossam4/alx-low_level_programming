#include "main.h"

/**
 * alloc_grid - unction that returns a pointer to a 2 dimensional
 * @width : number of columns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);

		if (output[i] == 0)
		{
			free(output);
			for (j = 0; j <= height; j++)
				free(output[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			output[i][j] = 0;
	}
	return (output);
}
