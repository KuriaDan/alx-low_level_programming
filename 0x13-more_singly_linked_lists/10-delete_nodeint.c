#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *j, *node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (i == index)
	{
		if (*head)
		{
			j = *head;
			*head = (*head)->next;
			free(j);
			return (1);
		}
	}
	else
	{
		j = *head;
		while (i < (index - 1) && j)
		{
			i++;
			j = j->next;
		}
		if (j)
		{
			node = j;
			j = j->next;
			node->next = j->next;
			free(j);
		}
		else
			return (-1);
	}
	return (1);
}
