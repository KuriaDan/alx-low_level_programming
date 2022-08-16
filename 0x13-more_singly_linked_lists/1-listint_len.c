#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to head of the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}