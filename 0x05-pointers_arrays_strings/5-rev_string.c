#include "main.h"
/**
  * rev_string - function to reverse a string
  * @s: string to reverse
  * Return: 0
  */
void rev_string(char *s)
{
	int f, rev_s;
	char c;

	for (f = '\0'; s[f] != 0; f++)
	{
	}
	rev_s = 0;
	for (f = f - 1; rev_s < f; rev_s++)
	{
		c = s[f];
		s[f] = s[rev_s];
		s[rev_s] = c;
		f--;
	}
}
