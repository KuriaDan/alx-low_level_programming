#include "main.h"
#include <stdlib.h>
/**
  * create_array - function to create an array of chars,
  * and initializes it with a specific char.
  * @size: size of array
  * @c: specific char
  * Return: null or array
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(size * sizeof(c));

	while (i < size)
	{
		if (arr == NULL)
		{
			return (NULL);
		}
		arr[i] = c;
		i++;
	}
	return (arr);
}
