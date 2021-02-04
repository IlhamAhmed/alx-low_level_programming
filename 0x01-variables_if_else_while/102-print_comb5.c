#include <stdio.h>
/**
 *main - prints all possible combination of 2 two digit numbers
 *Return: 0 for success
 */
int main(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (m = j + 1; m < 58; m++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(m);
					if ((i != 57 || j != 56) || (k != 57 || m != 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
