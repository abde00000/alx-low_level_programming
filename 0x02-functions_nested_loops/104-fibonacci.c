#include <stdio.h>
#include"main.h"

/**
 * printFibonacci - Prints the first n Fibonacci numbers
 *                   starting with 1 and 2, separated by commas and spaces.
 * @n: The number of Fibonacci numbers to print
 */

void printFibonacci(int n)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int i;

	printf("%lu, %lu", a, b);
	for (i = 3; i <= n; i++)
	{
		unsigned long int sum;

		sum = a + b;
		printf(", %lu", sum);
		a = b;
		b = sum;
	}
	printf("\n");
}
/**
 * main - Entry point of the program
 * Return: 0 on success
 */

int main(void)
{
	printFibonacci(98);
	return (0);
}
