#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog info
 * @name : new name of the dog
 * @age: new age
 * @owner: new owner name
 * Return: a pointer with stored data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int name_len = 0;
	int owner_len = 0;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[i] != '\0')
	{
		name_len++;
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
	{
		owner_len++;
		i++;
	}
	dog->name = malloc(sizeof(char) * (name_len + 1));
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[name_len] = '\0';
	for (i = 0; i < owner_len; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[owner_len] = '\0';
	dog->age = age;
	return (dog);
}
