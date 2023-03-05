#include "main.h"

/**
 * print_number - function prints integer
 *
 * @n: interger to be printed
 *
 * Return: void
 */

void print_number(int n)

{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9 && n != 0)
	{
	print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
