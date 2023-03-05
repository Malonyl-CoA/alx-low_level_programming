#include "main.h"

/**
 * print_triangle - function prints trianle shape
 *
 * @size: size of triangle to be printed
 *
 * Return: void
 */

void print_triangle(int size)

{
	int k, b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 0; k < size; k++)
	{
	for (b = 0; b < size; b++)
	{
	if (b < size - k - 1)
	{
	_putchar(' ');
	}
	else
	{
	_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
}
