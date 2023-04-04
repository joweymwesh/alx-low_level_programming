#include "lists.h"

/**
 * get_nodeint_at index - returns node to a list
 * @head: head poineter
 * @index: index of the node
 *
 * Return: address of the node
 */

listint_t *get_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t **head = head;
	unsigned int i = 0;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);

		head = head ->next;
	}
			return (NULL);
}
