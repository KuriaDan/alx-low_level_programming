#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the beginning of a dlistint list
  * @head: pointer to head pointer of the list
  * @n: value of new node
  * Return: address of the new element or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i, *j;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->prev = NULL;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = i;
		i->prev = *head;
		return (i);
	}
	j = *head;
	while (j->next)
	j = j->next;
	j->next = i;
	i->prev = j;
	return (i);
}
