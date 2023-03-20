#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to a charcter that will be changed
 * @src: pointer to a charcter that will be changed
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
