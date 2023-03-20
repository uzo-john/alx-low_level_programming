#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that print the end of a string
 *  @s: string to be supplied
 *  Return: return 0 (Success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
