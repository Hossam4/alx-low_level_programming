#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that sums
 * @argc: arg count
 * @argv: arg values
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; y < argv[x][y] != '\0'; y++)
			{
				if (!(isdigit(argv[x][y])))
				{
					printf("Error\n");
					return (1);
				}
			sum += atoi(argv[x]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
