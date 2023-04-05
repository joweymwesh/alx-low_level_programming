#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head:address of the first node
 */

void free_listint(listint_t *head)
{
	listint_t *jomu, *jomu2;
	jomu = head;
	while (jomu != NULL)
	{
		jomu2 = jomu->next;
		free(jomu);
		jomu = jomu2;
	}
}
