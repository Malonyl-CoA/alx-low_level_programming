#include "main.h"

/**
 * print_line - the function prints line
 *
 * @n: number of times to print
 *
 * Return: void
 */

void print_line(int n)
{
	int k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 0; k < n; k++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
