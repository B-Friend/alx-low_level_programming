#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int a, b, c, d;
	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 2; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; a++)
				{
					if (a >= 2 && b >= 4)
                                                break;
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(58);
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar('\n');
				}
			}
		}
	}
}
