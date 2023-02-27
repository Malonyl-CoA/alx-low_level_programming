#include "main.h"

/**
 * _isalpha -function check for alphabets
 *
 * @c: parameter to be checked
 *
 * Return: 1 if all condition true else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

