#include "main.h"

/**
 * print_most_numbers - print some of numbers
 *
 * Return: void
 */

void print_most_numbers(void)

{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
