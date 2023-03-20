#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatentes
 * @dest: first string
 * @src: second string
 * @n: number of byte to concatente
 * Return: pointer to designated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
	return (dest);
}
