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
	int a, b, c;
	char *arr;

	c = 0;
	arr = malloc(sizeof(*s1 + *s2));

	if (arr == NULL)
		return (NULL);
	
	a = 0;

	while (s1[a] != '\0')
	{
		arr[c] = s1[a];
		a++;
		c++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		arr[c] = s2[b];
		b++;
		c++;
	}
	return (arr);
	free(arr);
}
