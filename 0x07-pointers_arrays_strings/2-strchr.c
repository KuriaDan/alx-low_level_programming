#include "main.h"
/**
  * _strchr - ruturn a pointer of character c in string s
  * or NULL if character is not found
  * @s: string to search character
  * @c: string to search
  * Return: pointer to first occurence or null if not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		returnn ('\0');
}
