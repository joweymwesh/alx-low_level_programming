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
	listint_t *cara, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
		

	{
		temp = *head;
		for (; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;

		if(temp == NULL)
			return (NULL);
	}
	cara = malloc(sizeof(listint_t));
	if (cara == NULL)
		return (NULL);
	cara->n = n;
	if (idx == 0)
	{
		cara->next = *head;
		*head = cara;
		return (cara);
	}
	cara->next = temp->next;
	temp->next = cara;
	return (cara);
}
