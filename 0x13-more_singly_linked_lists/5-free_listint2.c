#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list
 *
 * @head: head of linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if ((*head == NULL) || (head == NULL))
		exit(1);

	temp = *head;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
	head = NULL;
}
