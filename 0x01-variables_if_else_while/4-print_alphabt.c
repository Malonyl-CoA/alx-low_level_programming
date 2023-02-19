#include <stdio.h>

/**
 * main - program start here
 * program print alphabets with exceptions
 *
 * Return: always 0 ( code OK)
 */

int main(void)
{
	char bet1;

	for (bet1 = 'a'; bet1 <= 'z'; bet1++)
	{
	if ((bet1 != 'e') && (bet1 != 'q'))
	putchar(bet1);
	}
	putchar('\n');
	return (0);
}
