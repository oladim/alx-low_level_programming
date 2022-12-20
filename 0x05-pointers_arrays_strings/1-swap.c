#include "main.h"

/**
 * swap_int - function to swap values via their memory addreses
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int first = *a;
	int second = *b;
	*a = second;
	*b = first;
}
