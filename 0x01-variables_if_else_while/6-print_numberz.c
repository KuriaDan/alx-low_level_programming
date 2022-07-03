#include <stdio.h>
/**
  * main - print 0-9
  * Return: 0
  */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

