#include "main.h"
/**
  * _puts - function to print a string followed by a new line
  * @str: string to print
  * Return: 0
  */
void _puts(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
