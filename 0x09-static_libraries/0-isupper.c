#include <ctype.h>

/**
 * _isupper -  function to check if parameter is uppercase
 *
 * @c: parameter to check
 *
 * Return: Always 1 Succes and 0 for Failue
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
