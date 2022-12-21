#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: frist string
 * @s2: second string
 * Return: Value less than 0 if string is less than the other
 * when value is greater than 0 if string is greater
 * 0 if string are equal
 */

int _strcmp(char *s1, char *s2)
{
	int counter, comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comVal = s1[counter] - s2[counter];
	return (comVal);
}
