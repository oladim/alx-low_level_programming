#include "ctype.h"

/**
 * _isalpha - program to print a to z in lowercase
 *
 * @c: parameter c to check if lower
 *
 * Return: Always 0 Success
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
