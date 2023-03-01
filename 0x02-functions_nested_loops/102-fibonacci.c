#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)

{	
	int i;
	long long f = 1, s = 2, n;

	printf("%lld, %lld, ", f, s);

	for (i = 3; i <= 50; i++)
	{
	n = f + s;
	printf("%lld, ", n);
	f = s;
	s = n;
	}
	printf("\n");
	return (0);
}
