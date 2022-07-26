#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns a pointer to a duplicate string of str
  * @str: string
  * Return: Null if sr is NULL, or pointer to the duplicated string
  */
char *_strdup(char *str)
{
	char *arr;
	int i, j = 0, k = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		j++;
	arr = malloc(sizeof(char) * i + 1);
	if (arr == NULL)
		return (NULL);
	while (str[k] != '\0')
	{
		arr[k] = str[k];
		k++;
	}

	return (arr);
}
