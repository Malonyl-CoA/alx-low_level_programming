#include <stdio.h>

/**
 * main - program start here
 * program print hexadecimal numbers
 *
 * Return: always 0 (code OK)
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
	putchar(y);
	}
	putchar('\n');
	return (0);
}
