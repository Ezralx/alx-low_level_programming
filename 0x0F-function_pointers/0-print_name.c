#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name:name of the person
 * @f:pointer to a function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	else
	{
		f(name);
	}
}
