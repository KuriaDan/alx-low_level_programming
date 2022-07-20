#include "main.h"
/**
  * _print_rev_recursion - function to print a string recursively
  * @s: pointer to the string
  * Return: nothing
  */
void _print_rec_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
