#include <stdio.h>

/**
 * main - print first 50 fibonnaci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n = 50;
	int fib[n];
	int i;
	
	fib[0] = 1;
	fib[1] = 1;

	for (i = 2; i < n; i++)
	{
	fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 1; i < n; i++)
	{
	printf("%d, ", fib[i]);
	}
	printf("\n");
	return (0);
}
