#include <stdio.h>
/**
 *main - find largest primefactor
 *Return: 0
 */
int main(void)
{
	unsigned long i;
	unsigned long n;

	i = 2;
	n = 612852475143;
	while (n != 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n = n / i;
			}
		}
		i++;
	}
	printf("%lu\n", i - 1);
	return (0);
}
