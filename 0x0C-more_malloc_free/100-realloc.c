#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *north, *south;
	unsigned int k;

	if (ptr != NULL)
		north = ptr;

	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	south = malloc(new_size);
	if (south == NULL)
		return (0);
	for (k = 0; k < (old_size || k < new_size); k++)
	{
		*(south + k) = north[k];
	}
	free(ptr);
	return (south);
}
