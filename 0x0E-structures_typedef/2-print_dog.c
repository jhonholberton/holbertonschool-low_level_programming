#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - function that prints a struct dog
  * @d: pointer
  * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		printf("Name: %s\n", d->name);
		else
		printf("Name: (nil)\n");
		if (d->age > 0)
		printf("Age: %.6f\n", d->age);
		else
		printf("Age: (nil)\n");
		if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
		else
		printf("Owner: (nil)\n");
	}
}
