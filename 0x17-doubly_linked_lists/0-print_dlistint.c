#include "lists.h"
/**
  * print_dlistint - prints a doubly linked list
  * @h: doubly linked list
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t len = 0;

	while (actual)
	{
		printf("%i\n", actual->n);
		actual = actual->next;
		len++;
	}
	return (len);
}
