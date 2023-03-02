#include <stdio.h>

/**
 * main - prints first 98 fibs
 *
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int i;
	unsigned long f = 1, s = 2, n;

	printf("%lu, %lu", f, s);
	for (i = 3; i <= 98; i++)
	{
	n = f + s;
	if (i == 98)
	{
	printf(", %lu", n);
	}
	else
	{
	printf(", %lu", n);
	}
	f = s;
	s = n;
	}
	printf("\n");
	return (0);
}
