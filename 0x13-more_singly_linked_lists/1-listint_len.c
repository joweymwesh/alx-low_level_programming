#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of the list
 * @n: integer inserts into the new node
 * Return: number of elements in the list
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;
	tp = malloc(sizeof(listint_t));
	if (tp == NULL);
	return (NULL);

	tp->n = n;
	tp->next = *head;
	return (*head);
}
