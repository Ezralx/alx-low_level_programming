#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line.
 * @argv:comand vector
 * @argc: command counter
 * Return: Always 0 (succsuss)
 */
int main(int argc, char *argv[])
{
	printf("Program name %s\n", argv[0]);

	if (argc == 2)
	{
		printf("The argument supplied is %s\n", argv[1]);
	}
	else if (argc > 2)
	{
		printf("Too many argument supplied is.\n");
	}
	else
	{
		printf("One argument expected.\n");
	}
	return (0);
}

