#include "main.h"
/**
  * _strncpy - function to concatenate 2 strings
  * @dest: string to be modified
  * @src: string to be concatenated to dest
  * @n: how much to copy from src to dest
  * Return: a pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
