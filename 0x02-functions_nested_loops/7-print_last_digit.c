#include "main.h"
/**
  * print_last_digit - function that prints the last digit
  * @i: int used in the argument of the function
  * Return: 0
  */
int print_last_digit(int i)
{
	if (i > 10 || c == 0)
	{
		_putchar(i % 10);
		return (i % 10);
	}
	else
	{
		i = i * -1;
		_putchar (i % 10);
		return (i % 10);
	}
}
