#include <stdio.h>

/**
 * main - program start here
 * program prints numbers single digits
 *
 * Return: always 0 (code OK)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
	printf("%d", x);
	x++;
	}
	printf('\n');
	return (0);
}
