#include "main.h"
/**
 * _islower - checks if a character is lowercase if yes it returns l
 * otherwise it returns 0
 * @c: The int value to be compared with the ASCII value
 * Return: 0 if successful. islower - Entry point
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
