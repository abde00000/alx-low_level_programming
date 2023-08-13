#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argc
 * @av: argv
 *
 * Return: a pointer to a new string
 * It returns NULL if the program fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, pos;
	int len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
	}
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	pos = 0;
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[pos++] = av[i][j++];
		}
		if (i < ac - 1)
			ptr[pos++] = '\n';
	}
	ptr[pos] = '\0';
	return (ptr);
}
