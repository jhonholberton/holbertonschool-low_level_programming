#ifndef _MY_DOG_
#define _MY_DOG_

/**
* struct dog - Define a new type struct dog
* @name: name
* @age: age
* @owner: owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
