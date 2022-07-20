#include "main.h"
/**
  * _pow_recursion - function to return the value of x raiyed to power y
  * @x: number
  * @y: number to raise x by
  * Return: x to power y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
