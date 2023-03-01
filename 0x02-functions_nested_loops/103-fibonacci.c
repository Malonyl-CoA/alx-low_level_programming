#include <stdio.h>

/**
 * main - print sum of all even fibonacci below 4000000
 *
 * Return: 0 (success)
 */

int main(void)

{
	int f = 1, s = 2, n;
	long sum = 2;

	while (s <= 4000000)
	{
	n = f + s;
	f = s;
	s = n;

	if (n % 2 == 0)
	{
	sum += n;
	}
	}
	printf("%ld\n", sum);

	return (0);
}
