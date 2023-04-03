#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements of a singly linked list
 * @h: a pointer to the head of the list
 *
 * Return: number of nodes in the list
 **/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
