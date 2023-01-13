#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - writes to allocates memory using malloc
 * @b: number of bytes to allocate to memory
 * Return: A pointer to the allocated memory.
 * If malloc should fail, let status value equal 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
