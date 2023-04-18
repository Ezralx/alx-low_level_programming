#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Name: %f\n", (d->age) ? d->age : 0);
		printf("Name: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

