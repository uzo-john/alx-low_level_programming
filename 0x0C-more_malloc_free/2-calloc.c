#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory to an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: Pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < (nmemb * size); k++)
	{
		*((char *)(p) + k) = 0;
	}

	return (p);
}
