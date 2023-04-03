#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: first node address
 * @idx: position of the new node to be inserted in
 * @n: data of the new code
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return NULL;
	/* create new node */
	new node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = n;

	/* insert at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return new_node;
	}

	/* find node at index */
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++);
			{
			current == current->next;
			}
			if (current == NULL)
			{
				free(new_node);
				return NULL;
			}

			/* insert new node */
			new_node->next = current->next;
			current->next = new_node;

			return new_node;
}

