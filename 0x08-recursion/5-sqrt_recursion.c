#include "main.h"
/**
  * _sqrt_recursion - find square root recursively
  * @n: number to find square root of
  * Return: square root
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (helper(n, 1));
}

/**
  * helper - helper function
  * @n: the number
  * @i: increment number
  * Return: square root
  */
int helper(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (helper(n, i + 1));
	else
		return (-1);
}
