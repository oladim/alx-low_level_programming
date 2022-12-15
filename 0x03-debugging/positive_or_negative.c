#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry for the program
 *
 * Return: Always 0 Success
 */

int positive_or_negative(int y)

{
	if (y > 0)
	{
		printf("%u is positive\n", y);
	} else if (y < 0)
	{
		printf("%d is negative\n", y);
	} else
	{
		printf("%u is zero\n", y);
	}
	return (0);

}
