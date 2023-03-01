#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Retur: 0 (success)
 */

int main(void)

{
	int first = 1, second = 2, next;

	printf("%d, %d, ", first, second);

	for (int i = 3; i <= 50; i++)
	{
	next = first + second;
	printf("%d, ", next);
	first = second;
	second = next;
	}
	printf("\n");
	return 0;
}
