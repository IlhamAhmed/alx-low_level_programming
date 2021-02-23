#include "holberton.h"
#define NULL 0
/**
 **_strstr - locates a substring
 *@haystack: takes a string
 *@needle: takes a substirng
 *Return: the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			int a = i, b = 0;

			while (needle[b] != '\0')
			{
				if (haystack[a] == needle[b])
				{
					a++;
					b++;
				}
				else
				{
					break;
				}
			}
			if (needle[b] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
