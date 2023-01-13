#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 */
int *array_range(int min, int max)
{
	int *north, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	north = malloc(sizeof(int) * size);

	if (north == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		north[index] = min++;

	return (north);
}
