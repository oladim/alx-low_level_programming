#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of paramaters from prompt
 * @argv: array of the parametrs
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				add += atoi(argv[i]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", add);
		return (0);

	}
}
