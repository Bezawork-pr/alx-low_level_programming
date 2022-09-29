#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 *
 * @head: head of double linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
