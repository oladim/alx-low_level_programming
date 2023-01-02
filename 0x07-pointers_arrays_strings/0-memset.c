#include "main.h"
#include <string.h>

/**
 * _memset - function to replace content
 * @s: first param
 * @b: second param
 * @n: number of items
 * Return: address to the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
