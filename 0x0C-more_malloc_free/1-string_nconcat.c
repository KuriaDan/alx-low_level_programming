#include <stdlib.h>
#include "main.h"
/**
  * string_nconcat - concatenate 2 strings
  * @s1: string 1
  * @s2: string 2
  * @n: bytes of string 2
  * Return: pointer to concatenated string
  */
char *string_nconcate(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, k = 0;

	/* if null is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* FInding size of string 1 */
	while (s1[i] != '\0')
		i++;
	/* allocating memory */
	ptr = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*ptr)));
	
	/* segf */
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		ptr[i] = s1[i];
		i++;
	}
	for (k = 0; s2[k] != '\0'; && k < n; k++, i++)
		ptr[i] = s2[k];
	ptr[i] = '\0';
	return (ptr);
}
