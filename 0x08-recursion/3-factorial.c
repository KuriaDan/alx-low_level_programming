#include "main.h"
/**
  * factorial - function to retunr the factorial of a number
  * @n: number to evaluate factorial of
  * Return: factorial
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
