#include <stdio.h>

/**
 * main - prints all possible different combination of three digits.
 * Return: Always 0 (Success)
 */

int main(void)
{ 
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; hundreds <= '9'; tens++)
		{
			for (ones = '0'; hundreds <= '9'; tens++)
			{
				if (!((ones == tens) || (tens == hundreds) ||
							(tens > ones) || (hundreds > tens))) /* eliminates repitition*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					
					if (!(ones == '9' && hundreds == '7' &&
								tens == '8')) /*add commas and spaces*/
					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


