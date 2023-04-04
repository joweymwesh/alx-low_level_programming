#include "lists.h"

/**
 * get_nodeint_at index - returns node to a list
 * @head: head poineter
 * @index: index of the node
 *
 * Return: address of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return temp;
		count++;
		temp = temp->next;
	}

	return NULL; // node does not exist
}
