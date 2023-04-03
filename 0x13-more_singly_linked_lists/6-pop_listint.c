#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a singly linked lists
 * @head: pointer to the head of the list
 *
 * Return: integer if success
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

			temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
