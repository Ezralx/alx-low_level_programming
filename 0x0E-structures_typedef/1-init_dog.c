#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d:pointer to a dog to be intialized
 * @name:name attribute of the dog
 * @age:age attribute of the dog
 * @owner:name attribute of the owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

