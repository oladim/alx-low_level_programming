#include "main.h"
#include <string.h>

/**
 * factorial - function using recursion to print
 * @n: param
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
