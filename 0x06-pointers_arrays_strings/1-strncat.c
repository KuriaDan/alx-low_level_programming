#include "main.h"
/**
  * _strncat - function to concat 2 strings
  * @dest: string to be modofied
  * @src: string that will be concatenated to @dest.
  * @n: copy src to position n
  * Return: a pointer to the modified @dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int idx_1 = 0;
	int idx_2 = 0;

	while (dest[idx_1] != '\0')
	{
		idx_1++;
	}
	while (idx_2 < n && src[idx_2] != '\0')
	{
		dest[idx_1 + idx_2] = src[idx_2];
		idx_2++;
	}
	dest[idx_1 + idx_2] = '\0';
	return (dest);
}
