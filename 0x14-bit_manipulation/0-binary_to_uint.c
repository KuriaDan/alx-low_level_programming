#include "main.h"
#include <stdlib.h>
/**
  * binary_to_uint - converts binary to unsigned integer
  * @b: pointer to a string containing 1 and 0
  * Return: converted number or 0
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j = j << 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
