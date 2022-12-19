#include <stdio.h>
#include "main.h"

/**
 * print_array - function that print element of array
 * @a: pointer parameter
 * @n: integer variables
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}
	printf('\n');
}
