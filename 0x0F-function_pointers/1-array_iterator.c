#include <stddef.h>
/**
 *array_iterator - execute a function on the elements of an array
 *@array: takes array
 *@size: takes the size of the array
 *@action: pointer to the function
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
