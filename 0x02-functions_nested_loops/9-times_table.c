#include "main.h"

/**
 * times_table - prints a 9 times table
 */

void times_table(void)
{
	int w, x, y, z;

	for (w = 0; w <= 9; w++)
	{
	for (x = 0; x <= 9; x++)
	{
	y = w * x;
	if (y == 0 && x == 0)
	_putchar(y + '0');
	else if (y > 9)
	{
	z = y % 10;
	y /= 10;
	_putchar(',');
	_putchar(' ');
	_putchar(y + '0');
	_putchar(z + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(y + '0');
	}
	}
	_putchar('\n');
	}
}
