#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry Point: write a program that print the exact content followed by a new line, to the standard error.
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}

