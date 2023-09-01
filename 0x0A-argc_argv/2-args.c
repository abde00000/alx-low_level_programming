#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: num of arg
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
