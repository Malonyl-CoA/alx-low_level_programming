#include "main.h"

/**
 * _abs - print abolute value of integer
 *
 * @i: parameter integer
 *
 * Return: always 0 (success)
 */

int _abs(int i)

{
	if (i < 0)
		i = (-1 * i);
	else if (i > 0)
		i = i;
	return (i);
}
