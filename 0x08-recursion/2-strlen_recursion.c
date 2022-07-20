#include "main.h"
/**
  * _strlen_recursion - function to determine length of a string recursively
  * @s: string to evaluate
  * Return: size of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
