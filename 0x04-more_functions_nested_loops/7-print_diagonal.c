#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: number of times to print \
 *
 * Return: void
 */

void print_diagonal(int n)

{
	int k, b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 0; k < n; k++)
	{
	for (b = 0; b < k; b++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
