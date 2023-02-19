#include <stdio.h>

/**
 * main - program starting point
 * program prints number using putchar only
 *
 * Return: always 0 (code OK)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
