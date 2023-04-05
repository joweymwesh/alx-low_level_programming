#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: double pointer to the head of the list
 * @n: value of the new node
 *
 * Return: address of the new node
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *zara, *zara2;

	zara = malloc(sizeof(listint_t));
	if (zara == NULL)
		return (NULL);

	zara->n = n;
	zara->next = NULL;

	if (*head == NULL)
	{
		*head = zara;
		return (zara);
	}

	zara2 = *head;
	while (zara2->next != NULL)
		zara2 = zara2->next;

	zara2->next = zara;
	return (zara);
}
