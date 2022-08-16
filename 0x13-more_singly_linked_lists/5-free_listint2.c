#include "lists.h"
#include <stdlib.h>

/**
*free_listint2 - frees memory from a linked list
*@head: pointer to the head of the list
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
}
