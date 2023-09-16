#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i = 0;
	int name_len = 0;
	int owner_len = 0;

	while (name[i] != '\0')
	{
		name_len++;
		i++;
	}
	d->name = malloc(sizeof(char) * (name_len + 1)); /* allocate memory for name*/
	if (d->name == NULL)
		return (NULL);
	for (i = 0; i < name_len; i++)
	{
		d->name[i] = name[i];
	}
	d->name[name_len] = '\0';
	i = 0;
	while (owner[i] != '\0')
	{
		nowner_len++;
		i++;
	}
	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == NULL)
		return (NULL);
		for (i = 0; i < owner_len; i++)
	{
		d->owner[i] = owner[i];
	}
	d->owner[owner_len] = '\0';
	d->age = age;
}
