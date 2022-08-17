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

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
	else
	{
		return;
	}
}
