#include "main.h"

/**
 * print_square - print square
 *
 * @size: size of square
 * Return: void
 */

void print_square(int size)

{
	int x, k;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (k = 0; k < size; k++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
