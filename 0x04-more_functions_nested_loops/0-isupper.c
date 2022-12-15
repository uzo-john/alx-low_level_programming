#include "main.h"

/**
 * _isupper - function that checks uppercase character
 * @c: paremeter
 * Return: 1 if is an uppercase character, 0 is other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
