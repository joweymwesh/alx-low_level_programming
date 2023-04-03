#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: address of the first node of a list
 *
 **/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
