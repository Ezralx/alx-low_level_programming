#include <stdio.h>
/**
 * print_buffer - a function that prints a buffer.
 * @b: the buffer to be printed
 * @size: The number of bytes to be printed from the buffer
 * Return:void
 */
void print_buffer(char *b, int size)
{
	int i = 0, j, k;

	
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		j = size - i < 10 ? size - i : 10;
		printf("%08x: ", i);
		for (k = 0; k < 10; k++)
		{
			if (k < j)
				printf("%02x", *(b + i + k));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < j; k++)
		{
			int c = *(b + i + k);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		i += 10;
	}
}
