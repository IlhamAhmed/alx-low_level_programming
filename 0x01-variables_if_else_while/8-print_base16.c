#include <stdio.h>
/**
 *main - prints digits of base 16 in lower case
 *Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
