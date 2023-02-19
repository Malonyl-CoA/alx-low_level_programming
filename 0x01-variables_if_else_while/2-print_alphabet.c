#include <stdio.h>

/**
 * main - start of program (print alphabet using putchar)
 *
 * Return: always 0 (ok)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	putchar(alph);
	}
	putchar('\n');
	return (0);
}
