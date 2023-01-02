#include "main.h"
#include <string.h>

/**
 * _memcpy - function to replace content
 * @dest: first param
 * @src: second param
 * @n: number of items
 * Return: address to the pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
