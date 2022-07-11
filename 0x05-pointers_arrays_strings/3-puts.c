#include "main.h"
/**
  * _puts - function to print a string followed by a new line
  * @str: string to print
  * Return: 0
  */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
