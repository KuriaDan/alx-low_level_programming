#include "lists.h"
/**
  * dlistint_len - returns number of elements in a doubly linked list
  * @h: pointer to head
  * Return: number of elements in doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *i;
	int j = 0;

	i = h;
	while (i != NULL)
	{
		i = i->next;
		j++;
	}
	return (j);
}
