#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(listint_t **head, 0);
    add_nodeint_end(listint_t **head, 1);
    add_nodeint_end(listint_t **head, 2);
    add_nodeint_end(listint_t **head, 3);
    add_nodeint_end(listint_t **head, 4);
    add_nodeint_end(listint_t **head, 98);
    add_nodeint_end(listint_t **head, 402);
    add_nodeint_end(listint_t **head, 1024);
    print_listint(listint_t *head);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 5);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(listint_t *head, 0);
    print_listint(head);
    return (0);
}
