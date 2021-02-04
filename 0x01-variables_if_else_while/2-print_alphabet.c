#include <stdio.h>
/**
 *main - prints lower case alphabets
 *Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
