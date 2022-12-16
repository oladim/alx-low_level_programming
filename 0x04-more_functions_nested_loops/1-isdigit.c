#include <ctype.h>

/**
 * _isdigit -  function to check if parameter is digit
 *
 * @c: parameter to check
 *
 * Return: Always 1 Succes and 0 for Failue
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
