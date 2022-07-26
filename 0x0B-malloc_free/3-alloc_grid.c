#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - function to return a pointer to a 2D array
  * @width: width of array
  * @height: length of array
  * Return: array or NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int **arr;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	for (j = 0; j < height; j++)
	{
		arr[j] = malloc(sizeof(int) * width);
		if (arr[j] == NULL)
		{
			while (j >= 0)
			{
				free(arr[j]);
				j--;
			}
			free(arr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			arr[j][k] = 0;
		}
	}
	return (arr);
}
