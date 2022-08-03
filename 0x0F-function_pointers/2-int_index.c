#include "function_pointers.h"
/**
  * int_index - function that searches for an integer
  * @array: array to check
  * @size: size
  * @cmp: function
  * Return: 0 if false, something else otherwise
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int inc;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (inc = 0; inc < size; inc++)
	{
		if (cmp(array[inc]))
			return (inc);
	}
	return (-1);
}
