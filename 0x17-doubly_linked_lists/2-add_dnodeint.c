#include "lists.h"
/**
 * add_dnodeint - add a new node in a doubly linked list
 * @head: the list
 * @n: the value to store in the node
 * Return: the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *j;

	j = *head;
	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);
	i->prev = NULL;
	i->n = n;
	if (j == NULL)
	{
		*head = i;
		i->next = NULL;
		return (i);
	}
	i->next = j;
	j->prev = i;
	*head = i;
	return (i);
}
