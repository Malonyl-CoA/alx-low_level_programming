#include <stdio.h>

/**
 * main - program start here
 * program print alphabet in reverse
 *
 * Return: always 0 (code OK)
 */

int main(void)
{
	char me;

	for (me = 'z'; me >= 'a'; me--)
	{
	putchar(me);
	}
	putchar('\n');
	return (0);
}

