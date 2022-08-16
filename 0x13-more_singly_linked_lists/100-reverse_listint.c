#include "lists.h"
/**
 * reverse_listint - reverse linked list
 *
 * @head: get head node of linked list
 *
 * Return: reversed linkd list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
