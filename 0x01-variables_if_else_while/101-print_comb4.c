#include <stdio.h>

/**
 * main - program start here
 * program print a combination of three digits
 *
 * Return: always 0 (code OK)
 */

int main(void)

{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
	for (y = '0'; y <= '9'; y++)
	{
	for (z = '0'; z <= '9'; z++)
	{
	if (x < y && y < z)
	{
	putchar(x);
	putchar(y);
	putchar(z);

	if (x != '7')
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
