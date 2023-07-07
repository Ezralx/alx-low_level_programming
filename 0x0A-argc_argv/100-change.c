#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: Number of Argument counter
 * @argv: Array of arguments
 *
 * Return: Always 0 (Succsuss)
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10,
		5, 2, 1};
	int position = 0, change = 0, aux = 0, total = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[position] != '\0')
	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}
		position++;
	}
	printf("%d\n", change);
	return (0);
}

