#include "main.h"
#include <stdlib.h>
/**
  * str_concat - function to concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * Return: concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0, s2[i]; i++)
		len++;
	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		arr[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i]; i++)
	{
		arr[j] = s2[i];
		j++;
	}
	return (arr);
}
