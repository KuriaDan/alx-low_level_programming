#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int counter = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		counter++;
		tp = tp->next;
	}
	return (counter);
}