#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: Number of Arguments
 * @argv: Array of Arguments
 *
 * Return: Always 0(Sucssess)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);

	}
	printf("\n");
	
	return (0);
}

