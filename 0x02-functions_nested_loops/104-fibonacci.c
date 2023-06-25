#include <stdio.h>
#include"main.h"

/**
 * printFibonacci - prints Fibonacci numbers start
 *				from 1 and 2
 * main: prints function
 * @n: finobacci sequence number
 * return: always 0
*/

void printFibonacci(int n)
{
	unsigned int a = 1;
	unsigned int b = 2;

	printf("%u ,%u ", a, b);
	unsigned int i;

	for (i = 3; i <= n; i++)
	{
		unsigned int sum;

		sum = a + b;
		printf(" ,%u", sum);
		a = b;
		b = sum;
	}
	printf("\n");
}
int main(void)
{
	printFibonacci(98);
	return (0);
}
