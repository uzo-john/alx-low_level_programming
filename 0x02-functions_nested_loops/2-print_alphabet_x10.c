#include "main.h"

/**
 * print_alphabet_x10 - print a - z ten times
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int g;

	for (i = 0; i < 10; i++)
	{
		for (g = 'a'; g <= 'z'; g++)
		{
			_putchar(g);
		}
		_putchar('\n');
	}
}
