#include "main.h"
/**
  * _isupper - function to check upper or lower case
  * @c: int parameter of the function
  * Return: 0 or 1
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
