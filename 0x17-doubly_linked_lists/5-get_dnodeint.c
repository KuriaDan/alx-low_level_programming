#include "lists.h"
/**
 * get_dnodeint_at_index - gets a specific index
 * @head: the list.
 * @index: the node to find
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *i;
	i	= head;
	while (i  != NULL && index != 0)
	{
		index--;
		i = i->next;
	}
	if (i != NULL)
		return (i);
	return (NULL);
}
