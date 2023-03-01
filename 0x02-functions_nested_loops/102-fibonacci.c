#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)

{
	int i;
	long f = 1, s = 2, n;

	printf("%ld, %ld, ", f, s);

	for (i = 3; i <= 50; i++)
	{
	n = f + s;
	printf("%ld, ", n);
	f = s;
	s = n;
	}
	printf("\n");
	return (0);
}
