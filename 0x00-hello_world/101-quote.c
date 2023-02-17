#include <stdio.h>
#include <unistd.h>
/**
 * main - execute program without printf,
 * and puts with its altenative functions
 *
 * Return: Always 1 if no error
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
