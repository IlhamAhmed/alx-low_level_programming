#include "holberton.h"
/**
 *jack_bauer - prints every minute of the day
 *void: takes no parameter
 *Return: nothing
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(58);
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}

	}
}
