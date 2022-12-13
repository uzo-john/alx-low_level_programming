#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -prints all natural number to 98
 *
 * @n: number provided by user
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
