#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add a new node at end of list.
 * @head: address of first node of a list
 * @n: integer to insert in the new node
 * Return: Address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *j;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	j = *head;
	while (j->next)
		j = j->next;
	j->next = i;
	return (i);
}