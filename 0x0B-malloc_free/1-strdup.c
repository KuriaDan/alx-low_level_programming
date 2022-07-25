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
	int i = 0;
	int len = 0;

	arr = malloc(sizeof(str));

	if (arr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		len++;
		i++;
	}
	return (arr);
}
