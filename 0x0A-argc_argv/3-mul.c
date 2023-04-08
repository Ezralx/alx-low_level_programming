#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: Number of Arguments
 * @argv: Array of Arguments
 *
 * Return: Always 0 (Sucssess)
 */
int main(int argc, char *argv[])
{
	int i, j;
       
	if (argc == 3)
	{
		i = atoi(argv[1]);
		j= atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}

