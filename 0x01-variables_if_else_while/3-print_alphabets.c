#include <stdio.h>

/**
 * main - program start here
 * program print lower and upper-case alphabets
 *
 * Return: Always 0 (OK)
 */

int main(void)
{
	char low;
	char cap;

	for (low = 'a'; low <= 'z'; low++)
	{
	putchar(low);
	}
	for (cap = 'A'; cap <= 'Z'; cap++)
	{
	putchar(cap);
	}
	putchar('\n');
	return (0);
}
