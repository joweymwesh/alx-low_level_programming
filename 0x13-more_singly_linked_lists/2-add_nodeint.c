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
	listint_t *new_node;

	new node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n :
		new_node->next = *head;
	*head = new_node;

	return (new_node);
}
