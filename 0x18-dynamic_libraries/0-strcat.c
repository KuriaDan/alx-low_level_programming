#include "main.h"
/**
  * _strcat - function to concatenate two strings
  * @dest: string to be modified
  * @src: string to be concatenated to dest
  * Return: a pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	int idx_1 = 0;
	int idx_2 = 0;

	while (dest[idx_1] != '\0')
	{
		idx_1++;
	}
	while (src[idx_2] != '\0')
	{
		dest[idx_1 + idx_2] = src[idx_2];
		idx_2++;
	}
	dest[idx_1 + idx_2] = '\0';
	return (dest);
}
