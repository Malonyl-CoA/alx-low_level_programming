#include <stdio.h>

/**
 * main - program start here
 * program print double digits combination
 *
 * Return: always 0 (code OK)
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
	for (y = '0'; y <= '9'; y++)
	{
	if (x < y)
	{
	putchar(x);
	putchar(y);

	if (x != '8' || (x == '8' && y != '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
