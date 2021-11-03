#include "function_pointers.h"

/**
  * array_iterator - Execute a function given as parameter on each
  * element of an array.
  * @array: array to print
  * @size: size of the array
  * @action: pointer to function returning void and receving int.
  *
  * Return: Void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action)
	{
		size_t i = 0;

		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
