#include "ctype.h"

/**
 * _islower - program to print a to z in lowercase
 *
 * @c: parameter c to check if lower
 *
 * Return: Always 0 Success
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
