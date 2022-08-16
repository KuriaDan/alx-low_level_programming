#include "lists.h"
/**
 * add_nodeint - addsa a new node at the beginning of a listint_t list
 * @head: pointer to address at the head of the list
 * @n: integer for the new node to contain
 * Return: NULL or address of element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;
	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;
	return (i);
}