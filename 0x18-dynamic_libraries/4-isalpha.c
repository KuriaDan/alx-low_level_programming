#include "main.h"
/**
  * _isalpha - function to check if c is lower or uppercase
  * @c: int used in the argument
  * Return: 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
