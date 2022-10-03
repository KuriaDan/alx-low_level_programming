#include "main.h"

/**
 * _isupper - checks if its uppercase
 * @c : character to check if uppercase
 * Return: 1 if c is uppercase otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
