#include "lists.h"
/**
 * pop_listint - Deletes the head node
 *
 * @head: takes memory addres of head
 *
 * Return: Head node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *pop;

	if (!*head)
	{
		return (0);
	}
	pop = ((*head)->next);
	n = (*head)->n;
	free(*head);
	*head = pop;
	return (n);
}
