#ifndef DOG_H
#define DOG_H

/**
 * struct dog - infos about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
#include <stdio.h>
#include <stdlib.h>
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
