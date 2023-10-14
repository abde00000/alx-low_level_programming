#include <stdio.h>
unsigned long int binary(unsigned long int n)
{
    if (n > 1)
    
        binary(n >> 1);
        
    putchar((n & 1) + '0');
}
int main() {
    
    unsigned long int n;
    printf("Enter your number :");
    scanf("%lu", &n);
    binary(n);
	printf("\n");
    return 0;
}
