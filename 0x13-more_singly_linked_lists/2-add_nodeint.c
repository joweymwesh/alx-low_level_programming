#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a  list
 * @head: pointer to pointer to the head node of the list
 * @n: integer to be stored in the new node
 *
 * Return: address of the new node
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));

	if (tp == NULL)
		return (NULL);

	tp->n = n :
		tp->next = *head;
	*head = tp;

	return (head);
}
