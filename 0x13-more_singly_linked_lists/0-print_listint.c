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
	const listint_t *zara;
	unsigned int cntr = 0;
	zara = h;
	while (zara)
	{
		printf("%d\n", zara->n);
		cntr++;
			zara = zara->next;
	}
	return (cntr);
}
