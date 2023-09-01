#include <stdio.h>
#include <stdlib.h>
/**
 * main -  adds positive numbers.
 * @argc: num of args
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, j, Sum;

	if (argc == 1)
	{
		printf("0\n");
	} else
	{
	Sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1); /* indicates an Error */
			}
		}

		Sum = Sum + atoi(argv[i]);
	}
	printf("%d\n", Sum);
	}
	return (0);
}
