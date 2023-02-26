#include "main.h"

/**
 * _islower - check for lower case alphabet
 *
 * @c: parameter to be checked
 *
 * Return:  1 if its a lower case alphabet
 * or return 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
