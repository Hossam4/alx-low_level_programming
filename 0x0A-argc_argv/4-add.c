#include <stdio.h>
#include <stdlib.h>

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
		printf("0\n");
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
			sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
