#include "main.h"
/**
  * _puts_recursion - function to print a string recursively
  * @s: pointer to char array or string
  * Return: nothing
  */
void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
