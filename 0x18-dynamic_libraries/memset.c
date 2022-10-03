#include "main.h"
/**
  * _memset - fill the first n bytes of memory pointed by s with b
  * @s: array
  * @b: constant byte
  * @n: number of times to change value in memory
  * Return: string s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
