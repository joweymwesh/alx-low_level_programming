#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - Delete a node at a given positiion.
* @head: First node address.
* @index: Position of the node to delete.
* Return: If success (1).
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *zora, *zora2;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		zora2 = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	zora = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (zora->next == NULL)
			return (-1);
		zora = zora->next;
	}
	zora2 = zora->next;
	zora->zora2 = zora2->zora2;
	free(zora2);
	return (1);
}
