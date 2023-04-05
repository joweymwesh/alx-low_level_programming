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
	listint_t *abc;

	abc = malloc(sizeof(listint_t));

	if (abc == NULL)
		return (NULL);

	abc->n = n;
		abc->next = *head;
	*head = abc;

	return (*head);
}
