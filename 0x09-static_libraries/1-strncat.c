#include "main.h"
#include <string.h>

/**
 * _strncat - creating copy funvtion specific number of characters
 * @dest: first param
 * @src: second param
 * @n: number of characters to print
 * Return: result of copy
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
