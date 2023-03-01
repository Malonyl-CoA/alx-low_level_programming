#include "main.h"

/**
 * jack_bauer - function print 24 hours with minutes
 *
 * Return: void
 */

void jack_bauer(void)

{
	int w, x;

	for (w = 0; w < 24; w++)
	{
	for (x = 0; x <= 59; x++)
	{
	_putchar(w / 10 + '0');
	_putchar(w % 10 + '0');
	_putchar(':');
	_putchar(x / 10 + '0');
	_putchar(x % 10 + '0');
	_putchar('\n');
	}
	}
}

