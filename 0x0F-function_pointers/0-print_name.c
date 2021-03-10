#include "function_pointers.h"
/**
 *print_name - prints name
 *@name: takes name
 *@f: takes a function
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
