#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 */

void print_alphabet_x10(void)
{
	char k;
	int b;

	for (b = 1; b <= 10; b++)
	{
	for (k = 'a'; k <= 'z'; k++)
	{
	_putchar(k);
	}
	_putchar('\n');
	}
}
