#include "function_pointers.h"
/**
  * array_iterator - function to execute a callback function
  * @array: array
  * @size: size
  * @action: action
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
