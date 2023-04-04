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
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	
	if (idx == 0)
		return (add_nodeint(head, n));

	temp = *head;
	for (i = 0; i < idx -1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL);


	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
