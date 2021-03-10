#include "function_pointers.h"
#define NULL 0
/**
 *print_name - prints name
 *@name: takes name
 *@f: takes a function
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
