#include "lists.h"
/**
  * list_len - returns the number of nodes in a list
  * @h: linked list
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
