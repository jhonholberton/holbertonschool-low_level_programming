#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * init_dog - Write a function that initialize a variable of type struct dog
  * @d: pointer
  * @name: name
  * @age: age
  * @owner: owner
  * return: nothing
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
