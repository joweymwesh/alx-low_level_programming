#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: address of the first node of a list
 *
 **/

void free_listint2(listint_t **head)
{
	listint_t *cara;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		cara = *head;
		*head = (*head)->next;
		free(cara);
		*head = cara;
	}
}
