#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node in a list
 * @head: address of the first node in a list
 * @index: index  of the node to find, starting at 0
 *
 * Return: node address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return current;
}