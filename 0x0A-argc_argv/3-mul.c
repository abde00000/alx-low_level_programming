#include <stdio.h>
#include <stdlib.h>
/**
 * main -  multiplies two numbers.
 * @argc: numb of args
 * @argv: args
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int Num1, Num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
	} else
	{
		Num1 = atoi(argv[1]);
		Num2 = atoi(argv[2]);
		mul = Num1 * Num2;
		printf("%d\n", mul);
	}
	return (0);
}
