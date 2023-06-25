#include <stdio.h>
#include"main.h"

/**
 * printFibonacci - prints Fibonacci numbers start
 *				from 1 and 2
 * @n: finobacci sequence number
 * main - prints function
 * return: always 0
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
int main(void)
{
	printFibonacci(98);
	return (0);
}
