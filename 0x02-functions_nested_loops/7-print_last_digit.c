#include "main.h"

/**
 * print_last_digit - extract and print the last digit
 *
 * @i:  number to pull the last digit from
 *
 * Return:  always (k)
 */

int print_last_digit(int i)

{
	int k;
	k = i % 10;

	if (i < 0)
		k = (-1 * k);
	_putchar(k + '0');

	return (k);
}
