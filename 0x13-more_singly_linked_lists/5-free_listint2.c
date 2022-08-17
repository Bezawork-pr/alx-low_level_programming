#include "lists.h"
/**
 * free_listint2 - free list
 *
 * @head: head node of linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *copy;

	copy = *head;
	if (copy == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
