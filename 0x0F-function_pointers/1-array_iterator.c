#include <stdio.h>
/**
 * array_iterator - function that executes function given as param.
 * @array: array of elements.
 * @size: size of array.
 * @action: function pointer.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
