#include <stdio.h>
#include <ctype.h>
/**
 * _islower - entry
 *
 * Return: Always 0 Success
 */

int _islower(int c)
{
	if(islower(c))
		return (1);
	else
		return (0);
}
