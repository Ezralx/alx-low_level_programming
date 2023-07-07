#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: Number of argument counter
 * @argv: Array of arguments
 *
 * Return: 0 no number is passed
 *         1 if not digits
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (argv[a][b] < '0' || argv[a][b] > '9')
				{
					printf("Error\n");
					return (1);
				}

			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
		return (0);
	}
}


