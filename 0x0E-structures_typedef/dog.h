#ifndef _MY_DOG_
#define _MY_DOG_

/**
* struct dog - Define a new type struct dog
* @name: name
* @age: age
* @owner: owner
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
