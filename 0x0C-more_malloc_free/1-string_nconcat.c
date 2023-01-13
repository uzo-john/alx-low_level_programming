#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First String.
 * @s2: Second String.
 * @n: Amount of bytes.
 * Return: Pointer to the allocated memory.
 * If malloc fails, status value should equal 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *north;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;
	north = malloc(sizeof(char) * (len + 1));

	if (north == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		north[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		north[len++] = s2[index];

	north[len] = '\0';

	return (north);
}
