#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: pointer to dog to print
 * Return: nothing if d is NULL
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
