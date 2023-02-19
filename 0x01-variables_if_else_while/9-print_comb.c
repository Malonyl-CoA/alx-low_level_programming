#include <stdio.h>

/**
 * main - program start here
 * program print numbers with coma
 *
 * Return: always 0 (code OK)
 */

int main(void)
{
	int x;
	
	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	if (x == '9')
	{
	continue;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
