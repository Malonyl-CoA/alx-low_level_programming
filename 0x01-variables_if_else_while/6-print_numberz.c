#include <stdio.h>

/**
 * main - program starting point
 * program prints number using putchar only
 *
 * Return: always 0 (code OK)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
