#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a', ch--)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}

